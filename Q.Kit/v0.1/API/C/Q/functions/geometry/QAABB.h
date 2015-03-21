/* Q Kit C API - functions/geometry/QAABB.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2015 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Q_functions_geometry_QAABB_H__
#define __Q_functions_geometry_QAABB_H__

#include <Q/functions/geometry/Q3DLine.h>

#define q_float_aabb_are_equal	 q_3d_float_line_are_equal
#define q_float_aabb_is_zero	 q_3d_float_line_is_zero
#define q_float_aabb_center	 q_3d_float_line_segment_center

#define q_double_aabb_are_equal	 q_3d_double_line_are_equal
#define q_double_aabb_is_zero	 q_3d_double_line_is_zero
#define q_double_aabb_center	 q_3d_double_line_segment_center

#define q_ldouble_aabb_are_equal q_3d_ldouble_line_are_equal
#define q_ldouble_aabb_is_zero	 q_3d_ldouble_line_is_zero
#define q_ldouble_aabb_center	 q_3d_ldouble_line_segment_center


#define Q_IMPLEMENTATION_AABB(Type, type, _)							\
												\
												\
Q_INLINE qboolean q_##type##_aabb_contains(Q##Type##AABB a, Q##Type##AABB b)			\
	{											\
	return	b.a.x >= a.a.x && b.a.y >= a.a.y && b.a.z >= a.a.z &&				\
		b.b.x <= a.b.x && b.b.y <= a.b.y && b.b.z <= a.b.z;				\
	}											\
												\
												\
Q_INLINE qboolean q_##type##_aabb_collide(Q##Type##AABB a, Q##Type##AABB b)			\
	{											\
	return	a.a.x < b.b.x && b.a.x < a.b.x &&						\
		a.a.y < b.b.y && b.a.y < a.b.y &&						\
		a.a.z < b.b.z && b.a.z < a.b.z;							\
	}											\
												\
												\
Q_INLINE Q##Type##AABB q_##type##_aabb_intersection(Q##Type##AABB a, Q##Type##AABB b)		\
	{											\
	q##type x1, x2, y1, y2, z1, z2;								\
												\
	return	(x1 = q_##type##_maximum(a.a.x, b.a.x)) <=					\
		(x2 = q_##type##_minimum(a.b.x, b.b.x)) &&					\
		(y1 = q_##type##_maximum(a.a.y, b.a.y))	<=					\
		(y2 = q_##type##_minimum(a.b.y, b.b.y)) &&					\
		(z1 = q_##type##_maximum(a.a.z, b.a.z))	<=					\
		(z2 = q_##type##_minimum(a.b.z, b.b.z))						\
												\
		? q_##type##_aabb(x1, y1, z1, x2, y2, z2)					\
		: q_##type##_aabb_zero;								\
	}											\
												\
												\
Q_INLINE Q##Type##AABB q_##type##_aabb_union(Q##Type##AABB a, Q##Type##AABB b)			\
	{											\
	Q##Type##AABB result;									\
												\
	result.a = q_3d_##type##_minimum(a.a, b.a);						\
	result.b = q_3d_##type##_maximum(a.b, b.b);						\
	return result;										\
	}											\
												\
												\
Q_INLINE Q##Type##AABB q_##type##_aabb_from_vertices(Q3D##Type a, Q3D##Type b)			\
	{											\
	Q##Type##AABB result;									\
												\
	result.a = q_3d_##type##_minimum(a, b);							\
	result.b = q_3d_##type##_maximum(a, b);							\
	return result;										\
	}											\
												\
												\
Q_INLINE Q3D##Type q_##type##_aabb_size(Q##Type##AABB object)					\
	{return q_3d_##type##_subtract(object.b, object.a);}					\
												\
												\
Q_INLINE q##type q_##type##_aabb_volume(Q##Type##AABB object)					\
	{return q_3d_##type##_inner_product(q_3d_##type##_subtract(object.b, object.a));}	\
												\
												\
Q_INLINE Q##Type##Sphere q_##type##_aabb_inner_sphere(Q##Type##AABB object)			\
	{											\
	Q##Type##Sphere result;									\
												\
	result.point = q_##type##_aabb_center(object);						\
												\
	result.radius =										\
	q_##type##_minimum									\
		(q_##type##_minimum(object.b.x - object.a.x, object.b.y - object.a.y),		\
		 object.b.z - object.a.z)							\
	/ _(2.0);										\
												\
	return result;										\
	}											\
												\
												\
Q_INLINE Q##Type##Box q_##type##_aabb_to_box(Q##Type##AABB object)				\
	{											\
	return q_##type##_box									\
		(object.a.x,		  object.a.y,		   object.a.z,			\
		 object.b.x - object.a.x, object.b.y - object.a.y, object.b.z - object.a.z);	\
	}											\
												\
												\
Q_INLINE Q3D##Type q_##type##_aabb_absolute_point_to_unit(Q##Type##AABB object, Q3D##Type point)\
	{											\
	return q_3d_##type									\
		((point.x - object.a.x) / (object.b.x - object.a.x),				\
		 (point.y - object.a.y) / (object.b.y - object.a.y),				\
		 (point.z - object.a.z) / (object.b.z - object.a.z));				\
	}											\
												\
												\
Q_INLINE Q3D##Type q_##type##_aabb_unit_point_to_absolute(Q##Type##AABB object, Q3D##Type point)\
	{											\
	return q_3d_##type									\
		(point.x * (object.b.x - object.a.x) + object.a.x,				\
		 point.y * (object.b.y - object.a.y) + object.a.y,				\
		 point.z * (object.b.z - object.a.z) + object.a.z);				\
	}											\
												\
												\
Q_INLINE qboolean q_##type##_aabb_contains_point(Q##Type##AABB object, Q3D##Type point)		\
	{											\
	return	object.a.x <= point.x && point.x <= object.a.x &&				\
		object.a.y <= point.y && point.y <= object.a.y &&				\
		object.a.z <= point.z && point.z <= object.a.z;					\
	}											\
												\
												\
Q_INLINE qboolean q_##type##_aabb_contains_line_segment(					\
	Q##Type##AABB	object,									\
	Q3D##Type##Line segment									\
)												\
	{											\
	return	q_##type##_aabb_contains_point(object, segment.a) &&				\
		q_##type##_aabb_contains_point(object, segment.b);				\
	}											\
												\
												\
Q_INLINE qboolean q_##type##_aabb_contains_box(Q##Type##AABB object, Q##Type##Box box)		\
	{											\
	return	object.a.x <= box.point.x	       &&					\
		object.a.y <= box.point.y	       &&					\
		object.a.z <= box.point.z	       &&					\
		object.b.x >= box.point.x + box.size.x &&					\
		object.b.y >= box.point.y + box.size.y &&					\
		object.b.z >= box.point.z + box.size.z;						\
	}											\
												\
												\
Q_INLINE qboolean q_##type##_aabb_contains_sphere(Q##Type##AABB	object, Q##Type##Sphere sphere)	\
	{											\
	return	sphere.point.x - sphere.radius >= object.a.x &&					\
		sphere.point.y - sphere.radius >= object.a.y &&					\
		sphere.point.z - sphere.radius >= object.a.z &&					\
		sphere.point.x + sphere.radius <= object.b.x &&					\
		sphere.point.y + sphere.radius <= object.b.y &&					\
		sphere.point.z + sphere.radius <= object.b.z;					\
	}


Q_IMPLEMENTATION_AABB(Float,   float,	Q_FLOAT	 )
Q_IMPLEMENTATION_AABB(Double,  double,	Q_DOUBLE )
Q_IMPLEMENTATION_AABB(LDouble, ldouble, Q_LDOUBLE)


/* MARK: - Default real type definitions */

#define q_aabb_are_equal	      q_3d_line_are_equal
#define q_aabb_is_zero		      q_3d_line_is_zero
#define q_aabb_center		      q_3d_line_segment_center

#define q_aabb_contains		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_contains	       )
#define q_aabb_collide		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_collide	       )
#define q_aabb_intersection	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_intersection	       )
#define q_aabb_union		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_union		       )
#define q_aabb_from_vertices	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_from_vertices	       )
#define q_aabb_size		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_size		       )
#define q_aabb_volume		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_volume		       )
#define q_aabb_inner_sphere	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_inner_sphere	       )
#define q_aabb_to_box		      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_to_box		       )
#define q_aabb_absolute_point_to_unit Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_absolute_point_to_unit)
#define q_aabb_unit_point_to_absolute Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_unit_point_to_absolute)
#define q_aabb_contains_point	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_contains_point	       )
#define q_aabb_contains_line_segment  Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_contains_line_segment )
#define q_aabb_contains_box	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_contains_box	       )
#define q_aabb_contains_sphere	      Q_JOIN_3(q_, Q_REAL_FIXED_TYPE_name, _aabb_contains_sphere       )

#endif /* __Q_functions_geometry_QAABB_H__ */