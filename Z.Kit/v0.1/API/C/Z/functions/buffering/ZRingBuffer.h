/* Z Kit C API - functioms/buffering/ZRingBuffer.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_functions_buffering_ZRingBuffer_H__
#define __Z_functions_buffering_ZRingBuffer_H__

#include <Z/types/buffering.h>
#include <Z/functions/base/value.h>

#define z_cpu_relax() asm volatile("pause\n": : :"memory")


Z_INLINE void z_ring_buffer_initialize(
	ZRingBuffer* object,
	void const*  buffers,
	zsize	     buffer_size,
	zsize	     buffer_count
)
	{
	object->buffers		  = (void *)buffers;
	object->buffer_size	  = buffer_size;
	object->buffer_count	  = buffer_count;
	object->production_index  = 0;
	object->consumption_index = 0;
	object->fill_count	  = 0;
	}


Z_INLINE void *z_ring_buffer_production_buffer(ZRingBuffer const *object)
	{
	return object->buffer_count - object->fill_count
		? (zuint8 *)object->buffers + object->production_index * object->buffer_size
		: NULL;
	}


Z_INLINE void *z_ring_buffer_consumption_buffer(ZRingBuffer const *object)
	{
	return object->fill_count
		? (zuint8 *)object->buffers + object->consumption_index * object->buffer_size
		: NULL;
	}


Z_INLINE void *z_ring_buffer_try_produce(ZRingBuffer *object)
	{
	if (object->buffer_count == object->fill_count) return NULL;
	object->production_index = (object->production_index + 1) % object->buffer_count;
	z_type_atomic_increment_then_get(SIZE)(&object->fill_count);
	return (zuint8 *)object->buffers + object->production_index * object->buffer_size;
	}


Z_INLINE void *z_ring_buffer_try_consume(ZRingBuffer *object)
	{
	if (!object->fill_count) return NULL;
	object->consumption_index = (object->consumption_index + 1) % object->buffer_count;
	z_type_atomic_decrement_then_get(SIZE)(&object->fill_count);
	return (zuint8 *)object->buffers + object->consumption_index * object->buffer_size;
	}


Z_INLINE void *z_ring_buffer_produce(ZRingBuffer *object)
	{
	while (object->buffer_count == object->fill_count) z_cpu_relax();
	object->production_index = (object->production_index + 1) % object->buffer_count;
	z_type_atomic_increment_then_get(SIZE)(&object->fill_count);
	return (zuint8 *)object->buffers + object->production_index * object->buffer_size;
	}


Z_INLINE void *z_ring_buffer_consume(ZRingBuffer *object)
	{
	while (!object->fill_count) z_cpu_relax();
	object->consumption_index = (object->consumption_index + 1) % object->buffer_count;
	z_type_atomic_decrement_then_get(SIZE)(&object->fill_count);
	return (zuint8 *)object->buffers + object->consumption_index * object->buffer_size;
	}


#endif /* __Z_functions_buffering_ZRingBuffer_H__ */
