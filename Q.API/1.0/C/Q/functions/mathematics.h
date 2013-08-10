/* Q API - functions/mathematics.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_functions_mathematics_H__
#define __Q_functions_mathematics_H__

#include <Q/types/mathematics.h>
#include <Q/functions/Q2DValue.h>
#include <Q/functions/Q3DValue.h>


/* MARK: - 2D Vector */


#ifndef Q_2D_VECTOR_EXPORT
#	define Q_2D_VECTOR_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_2d_float_vector(  a_x, a_y, b_x, b_y) ((Q2DFloatVector  ){a_x, a_y}, {b_x, b_y})
#	define q_2d_double_vector( a_x, a_y, b_x, b_y) ((Q2DDoubleVector ){a_x, a_y}, {b_x, b_y})
#	define q_2d_ldouble_vector(a_x, a_y, b_x, b_y) ((Q2DLDoubleVector){a_x, a_y}, {b_x, b_y})

#	define Q_2D_VECTOR_NEW(Type, type)

#else

#	define Q_2D_VECTOR_NEW(Type, type)				\
									\
	Q_INLINE Q2D##Type##Vector q_2d_##type##_vector(		\
		q##type a_x,						\
		q##type a_y,						\
		q##type b_x,						\
		q##type b_y						\
	)								\
		{							\
		Q2D##Type##Vector vector = {{a_x, a_y}, {b_x, b_y}};	\
		return vector;						\
		}

#endif

#define q_2d_float_vector_zero	 q_2d_float_vector(0.0F, 0.0F, 0.0F, 0.0F)
#define q_2d_double_vector_zero	 q_2d_float_vector(0.0,  0.0,  0.0,  0.0 )
#define q_2d_ldouble_vector_zero q_2d_float_vector(0.0L, 0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_2D_VECTOR(Type, type)		\
							\
							\
Q_2D_VECTOR_NEW(Type, type)				\
							\
							\
Q_2D_VECTOR_EXPORT					\
qboolean q_2d_##type##_vector_are_equal(		\
	Q2D##Type##Vector a,				\
	Q2D##Type##Vector b				\
)							\
	{						\
	return	q_2d_##type##_are_equal(a.a, b.a) &&	\
		q_2d_##type##_are_equal(a.b, b.b);	\
	}


Q_IMPLEMENTATION_2D_VECTOR(Float,   float  )
Q_IMPLEMENTATION_2D_VECTOR(Double,  double )
Q_IMPLEMENTATION_2D_VECTOR(LDouble, ldouble)
#undef Q_2D_VECTOR_NEW


/* MARK: - 3D Vector */


#ifndef Q_3D_VECTOR_EXPORT
#	define Q_3D_VECTOR_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_3d_float_vector(  a_x, a_y, a_z, b_x, b_y, b_z) ((Q3DFloatVector  ){a_x, a_y, a_z}, {b_x, b_y, b_z})
#	define q_3d_double_vector( a_x, a_y, a_z, b_x, b_y, b_z) ((Q3DDoubleVector ){a_x, a_y, a_z}, {b_x, b_y, b_z})
#	define q_3d_ldouble_vector(a_x, a_y, a_z, b_x, b_y, b_z) ((Q3DLDoubleVector){a_x, a_y, a_z}, {b_x, b_y, b_z})

#	define Q_3D_VECTOR_NEW(Type, type)

#else

#	define Q_3D_VECTOR_NEW(Type, type)					\
										\
	Q_INLINE Q3D##Type##Vector q_3d_##type##_vector(			\
		q##type a_x,							\
		q##type a_y,							\
		q##type a_z,							\
		q##type b_x,							\
		q##type b_y,							\
		q##type b_z							\
	)									\
		{								\
		Q3D##Type##Vector vector = {{a_x, a_y, a_z}, {b_x, b_y, b_z}};	\
		return vector;							\
		}

#endif

#define q_3d_float_vector_zero	 q_3d_float_vector(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f)
#define q_3d_double_vector_zero	 q_3d_float_vector(0.0,  0.0,  0.0,  0.0,  0.0,  0.0 )
#define q_3d_ldouble_vector_zero q_3d_float_vector(0.0L, 0.0L, 0.0L, 0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_3D_VECTOR(Type, type)		\
							\
							\
Q_3D_VECTOR_NEW(Type, type)				\
							\
							\
Q_3D_VECTOR_EXPORT					\
qboolean q_3d_##type##_vector_are_equal(		\
	Q3D##Type##Vector a,				\
	Q3D##Type##Vector b				\
)							\
	{						\
	return	q_3d_##type##_are_equal(a.a, b.a) &&	\
		q_3d_##type##_are_equal(a.b, b.b);	\
	}


Q_IMPLEMENTATION_3D_VECTOR(Float,   float  )
Q_IMPLEMENTATION_3D_VECTOR(Double,  double )
Q_IMPLEMENTATION_3D_VECTOR(LDouble, ldouble)
#undef Q_3D_VECTOR_NEW


/* MARK: - 2D Line */


#ifndef Q_2D_LINE_EXPORT
#	define Q_2D_LINE_EXPORT Q_INLINE
#endif

#define q_2d_float_line			q_2d_float_vector
#define q_2d_float_line_zero		q_2d_float_vector_zero
#define q_2d_float_line_are_equal	q_2d_float_vector_are_equal
#define q_2d_double_line		q_2d_double_vector
#define q_2d_double_line_zero		q_2d_double_vector_zero
#define q_2d_double_line_are_equal	q_2d_double_vector_are_equal
#define q_2d_ldouble_line		q_2d_ldouble_vector
#define q_2d_ldouble_line_zero		q_2d_ldouble_vector_zero
#define q_2d_ldouble_line_are_equal	q_2d_ldouble_vector_are_equal

#define Q_IMPLEMENTATION_2D_LINE(Type, type, _)				\
									\
Q_2D_LINE_EXPORT							\
Q2D##Type q_2d_##type##_line_segment_center(Q2D##Type##Line segment)	\
	{								\
	return q_2d_##type						\
		((segment.b.x - segment.a.x) / _(2.0) + segment.a.x,	\
		 (segment.b.y - segment.a.y) / _(2.0) + segment.a.y);	\
	}

Q_IMPLEMENTATION_2D_LINE(Float,   float,   Q_FLOAT  )
Q_IMPLEMENTATION_2D_LINE(Double,  double,  Q_DOUBLE )
Q_IMPLEMENTATION_2D_LINE(LDouble, ldouble, Q_LDOUBLE)


/* MARK: - 3D Line */


#ifndef Q_3D_LINE_EXPORT
#	define Q_3D_LINE_EXPORT Q_INLINE
#endif

#define q_3d_float_line			q_3d_float_vector
#define q_3d_float_line_zero		q_3d_float_vector_zero
#define q_3d_float_line_are_equal	q_3d_float_vector_are_equal
#define q_3d_double_line		q_3d_double_vector
#define q_3d_double_line_zero		q_3d_double_vector_zero
#define q_3d_double_line_are_equal	q_3d_double_vector_are_equal
#define q_3d_ldouble_line		q_3d_ldouble_vector
#define q_3d_ldouble_line_zero		q_3d_ldouble_vector_zero
#define q_3d_ldouble_line_are_equal	q_3d_ldouble_vector_are_equal

#define Q_IMPLEMENTATION_3D_LINE(Type, type, _)				\
									\
Q_3D_LINE_EXPORT							\
Q3D##Type q_3d_##type##_line_segment_center(Q3D##Type##Line segment)	\
	{								\
	return q_3d_##type						\
		((segment.b.x - segment.a.x) / _(2.0) + segment.a.x,	\
		 (segment.b.y - segment.a.y) / _(2.0) + segment.a.y,	\
		 (segment.b.z - segment.a.z) / _(2.0) + segment.a.z);	\
	}

Q_IMPLEMENTATION_3D_LINE(Float,   float,   Q_FLOAT  )
Q_IMPLEMENTATION_3D_LINE(Double,  double,  Q_DOUBLE )
Q_IMPLEMENTATION_3D_LINE(LDouble, ldouble, Q_LDOUBLE)


/* MARK: - Rectangle */


#ifndef Q_RECTANGLE_EXPORT
#	define Q_RECTANGLE_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_float_rectangle(  x, y, size_x, size_y) ((QFloatRectangle  ){{x, y}, {size_x, size_y}})
#	define q_double_rectangle( x, y, size_x, size_y) ((QDoubleRectangle ){{x, y}, {size_x, size_y}})
#	define q_ldouble_rectangle(x, y, size_x, size_y) ((QLDoubleRectangle){{x, y}, {size_x, size_y}})

#	define Q_RECTANGLE_NEW(Type, type)

#else

#	define Q_RECTANGLE_NEW(Type, type)					\
										\
	Q_INLINE Q##Type##Rectangle q_##type##_rectangle(			\
		q##type x,							\
		q##type y,							\
		q##type size_x,							\
		q##type size_y							\
	)									\
		{								\
		Q##Type##Rectangle rectangle = {{x, y}, {size_x, size_y}};	\
		return rectangle;						\
		}

#endif

#define q_float_rectangle_zero	 q_float_rectangle  (0.0F, 0.0F, 0.0F, 0.0F)
#define q_double_rectangle_zero	 q_double_rectangle (0.0,  0.0,  0.0,  0.0 )
#define q_ldouble_rectangle_zero q_ldouble_rectangle(0.0L, 0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_RECTANGLE(Type, type, _)				\
										\
										\
Q_RECTANGLE_NEW(Type, type)							\
										\
										\
Q_RECTANGLE_EXPORT								\
qboolean q_##type##_rectangle_are_equal(					\
	Q##Type##Rectangle a,							\
	Q##Type##Rectangle b							\
)										\
	{									\
	return	q_2d_##type##_are_equal(a.point, b.point) &&			\
		q_2d_##type##_are_equal(a.size,  b.size );			\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
qboolean q_##type##_rectangle_contains(						\
	Q##Type##Rectangle a,							\
	Q##Type##Rectangle b							\
)										\
	{									\
	return	b.point.x >= a.point.x && b.point.y >= a.point.y &&		\
		b.point.x +  b.size.x  <= a.point.x +  a.size.x	 &&		\
		b.point.y +  b.size.y  <= a.point.y +  a.size.y;		\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
qboolean q_##type##_rectangle_collision(					\
	Q##Type##Rectangle a,							\
	Q##Type##Rectangle b							\
)										\
	{									\
	return !(								\
		a.point.x > b.point.x + b.size.x  ||				\
		a.point.x + a.size.x  < b.point.x ||				\
		a.point.y > b.point.y + b.size.y  ||				\
		a.point.y + a.size.y  < b.point.y				\
	);									\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
Q##Type##Rectangle q_##type##_rectangle_intersection(				\
	Q##Type##Rectangle a,							\
	Q##Type##Rectangle b							\
)										\
	{									\
	q##type x1 = q_##type##_maximum(a.point.x, b.point.x),			\
		x2 = q_##type##_minimum						\
			(a.point.x + a.size.x, b.point.x + b.size.x);		\
										\
	if (x1 <= x2)								\
		{								\
		q##type y1 = q_##type##_maximum(a.point.y, b.point.y),		\
										\
			y2 = q_##type##_minimum					\
				(a.point.y + a.size.y, b.point.y + b.size.y);	\
										\
		if (y1 <= y2)							\
			return q_##type##_rectangle(x1, y1, x2 - x1, y2 - y1);	\
		}								\
										\
	return q_##type##_rectangle_zero;					\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
Q##Type##Rectangle q_##type##_rectangle_union(					\
	Q##Type##Rectangle a,							\
	Q##Type##Rectangle b							\
)										\
	{									\
	Q##Type##Rectangle rectangle;						\
										\
	rectangle.point.x = q_##type##_minimum(a.point.x, b.point.x);		\
	rectangle.point.y = q_##type##_minimum(a.point.y, b.point.y);		\
										\
	rectangle.size.x =							\
		q_##type##_maximum						\
			(a.point.x + a.size.x, b.point.x + b.size.x)		\
		- rectangle.point.x;						\
										\
	rectangle.size.y =							\
		q_##type##_maximum						\
			(a.point.y + a.size.y, b.point.y + b.size.y)		\
		- rectangle.point.y;						\
										\
	return rectangle;							\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
Q##Type##Rectangle q_##type##_rectangle_by_vertices(Q2D##Type a, Q2D##Type b)	\
	{									\
	Q2D##Type minimum = q_2d_##type##_minimum(a, b);			\
	Q2D##Type maximum = q_2d_##type##_maximum(a, b);			\
										\
	return q_##type##_rectangle						\
		(minimum.x,  minimum.y,						\
		 maximum.x - minimum.x, maximum.y - minimum.y);			\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
Q2D##Type q_##type##_rectangle_center(Q##Type##Rectangle rectangle)		\
	{									\
	return q_2d_##type							\
		(rectangle.point.x + rectangle.size.x / _(2.0),			\
		 rectangle.point.y + rectangle.size.y / _(2.0));		\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_minimum_x(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.x;}						\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_minimum_y(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.y;}						\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_maximum_x(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.x + rectangle.size.x;}				\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_maximum_y(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.y + rectangle.size.y;}				\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_middle_x(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.x + rectangle.size.x / _(2.0);}			\
										\
										\
Q_RECTANGLE_EXPORT								\
q##type q_##type##_rectangle_middle_y(Q##Type##Rectangle rectangle)		\
	{return rectangle.point.y + rectangle.size.y / _(2.0);}			\
										\
										\
Q_RECTANGLE_EXPORT								\
qboolean q_##type##_rectangle_contains_point(					\
	Q##Type##Rectangle	rectangle,					\
	Q2D##Type		point						\
)										\
	{									\
	return	point.x >= rectangle.point.x			&&		\
		point.y >= rectangle.point.y			&&		\
		point.x <  rectangle.point.x + rectangle.size.x	&&		\
		point.y <  rectangle.point.y + rectangle.size.y;		\
	}									\
										\
										\
Q_RECTANGLE_EXPORT								\
qboolean q_##type##_rectangle_contains_line_segment(				\
	Q##Type##Rectangle	rectangle,					\
	Q2D##Type##Line		line_segment					\
)										\
	{									\
	return	q_##type##_rectangle_contains_point(rectangle, line_segment.a)	\
	    &&	q_##type##_rectangle_contains_point(rectangle, line_segment.b);	\
	}


Q_IMPLEMENTATION_RECTANGLE(Float,   float,   Q_FLOAT  )
Q_IMPLEMENTATION_RECTANGLE(Double,  double,  Q_DOUBLE )
Q_IMPLEMENTATION_RECTANGLE(LDouble, ldouble, Q_LDOUBLE)
#undef Q_RECTANGLE_NEW


/* MARK: - Box */


#ifndef Q_BOX_EXPORT
#	define Q_BOX_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_float_box(  x, y, z, size_x, size_y, size_z) ((QFloatBox  ){{x, y, z}, {size_x, size_y, size_z}})
#	define q_double_box( x, y, z, size_x, size_y, size_z) ((QDoubleBox ){{x, y, z}, {size_x, size_y, size_z}})
#	define q_ldouble_box(x, y, z, size_x, size_y, size_z) ((QLDoubleBox){{x, y, z}, {size_x, size_y, size_z}})

#	define Q_BOX_NEW(Type, type)

#else

#	define Q_BOX_NEW(Type, type)						\
										\
	Q_INLINE Q##Type##Box q_##type##_box(					\
		q##type x,							\
		q##type y,							\
		q##type z,							\
		q##type size_x,							\
		q##type size_y,							\
		q##type size_z							\
	)									\
		{								\
		Q##Type##Box box = {{x, y, z}, {size_x, size_y, size_z}};	\
		return box;							\
		}

#endif

#define q_float_box_zero   q_float_box  (0.0F, 0.0F, 0.0F, 0.0F, 0.0F)
#define q_double_box_zero  q_double_box (0.0,  0.0,  0.0,  0.0,	 0.0 )
#define q_ldouble_box_zero q_ldouble_box(0.0L, 0.0L, 0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_BOX(Type, type, _)					\
										\
										\
Q_BOX_NEW(Type, type)								\
										\
										\
Q_BOX_EXPORT									\
qboolean q_##type##_box_are_equal(Q##Type##Box a, Q##Type##Box b)		\
	{									\
	return	q_3d_##type##_are_equal(a.point, b.point) &&			\
		q_3d_##type##_are_equal(a.size,  b.size );			\
	}


Q_IMPLEMENTATION_BOX(Float,   float,   Q_FLOAT	)
Q_IMPLEMENTATION_BOX(Double,  double,  Q_DOUBLE	)
Q_IMPLEMENTATION_BOX(LDouble, ldouble, Q_LDOUBLE)
#undef Q_BOX_NEW


/* MARK: - Circle */


#ifndef Q_CIRCLE_EXPORT
#	define Q_CIRCLE_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_float_circle(	x, y, radius) ((QFloatCircle  ){{x, y}, radius})
#	define q_double_circle(	x, y, radius) ((QDoubleCircle ){{x, y}, radius})
#	define q_ldouble_circle(x, y, radius) ((QLDoubleCircle){{x, y}, radius})

#	define Q_CIRCLE_NEW(Type, type)

#else

#	define Q_CIRCLE_NEW(Type, type)						\
										\
	Q_INLINE Q##Type##Circle q_##type##_circle(				\
		q##type x,							\
		q##type y,							\
		q##type radius							\
	)									\
		{								\
		Q##Type##Circle circle = {{x, y}, radius};			\
		return circle;							\
		}

#endif

#define q_float_circle_zero   q_float_circle  (0.0F, 0.0F, 0.0F)
#define q_double_circle_zero  q_double_circle (0.0,  0.0,  0.0 )
#define q_ldouble_circle_zero q_ldouble_circle(0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_CIRCLE(Type, type)					\
										\
										\
Q_CIRCLE_NEW(Type, type)							\
										\
										\
Q_CIRCLE_EXPORT									\
qboolean q_##type##_circle_are_equal(Q##Type##Circle a, Q##Type##Circle b)	\
	{									\
	return	a.radius == b.radius &&						\
		q_2d_##type##_are_equal(a.point, b.point);			\
	}


Q_IMPLEMENTATION_CIRCLE(Float,   float  )
Q_IMPLEMENTATION_CIRCLE(Double,  double )
Q_IMPLEMENTATION_CIRCLE(LDouble, ldouble)
#undef Q_CIRCLE_NEW


/* MARK: - Sphere */


#ifndef Q_SPHERE_EXPORT
#	define Q_SPHERE_EXPORT Q_INLINE
#endif

#if Q_C_HAS(COMPOUND_LITERAL)

#	define q_float_sphere(	x, y, z, radius) ((QFloatCircle	 ){{x, y, z}, radius})
#	define q_double_sphere(	x, y, z, radius) ((QDoubleCircle ){{x, y, z}, radius})
#	define q_ldouble_sphere(x, y, z, radius) ((QLDoubleCircle){{x, y, z}, radius})

#	define Q_SPHERE_NEW(Type, type)

#else

#	define Q_SPHERE_NEW(Type, type)				\
								\
	Q_INLINE Q##Type##Sphere q_##type##_sphere(		\
		q##type x,					\
		q##type y,					\
		q##type z,					\
		q##type radius					\
	)							\
		{						\
		Q##Type##Sphere sphere = {{x, y, z}, radius};	\
		return sphere;					\
		}

#endif

#define q_float_sphere_zero   q_float_sphere  (0.0F, 0.0F, 0.0F, 0.0F)
#define q_double_sphere_zero  q_double_sphere (0.0,  0.0,  0.0,	 0.0 )
#define q_ldouble_sphere_zero q_ldouble_sphere(0.0L, 0.0L, 0.0L, 0.0L)


#define Q_IMPLEMENTATION_SPHERE(Type, type)					\
										\
										\
Q_SPHERE_NEW(Type, type)							\
										\
										\
Q_SPHERE_EXPORT									\
qboolean q_##type##_sphere_are_equal(Q##Type##Sphere a, Q##Type##Sphere b)	\
	{									\
	return	a.radius == b.radius &&						\
		q_3d_##type##_are_equal(a.point, b.point);			\
	}


Q_IMPLEMENTATION_SPHERE(Float,   float  )
Q_IMPLEMENTATION_SPHERE(Double,  double )
Q_IMPLEMENTATION_SPHERE(LDouble, ldouble)
#undef Q_SPHERE_NEW


/* MARK: - Default real type definitions */


#if defined(Q_USE_REAL_FLOAT)

#	define q_minimum				q_float_minimum
#	define q_maximum				q_float_maximum
#	define q_lerp					q_float_lerp
#	define q_absolute				q_float_absolute
#	define q_clamp					q_float_clamp

#	define q_2d					q_2d_float
#	define q_2d_zero				q_2d_float_zero
#	define q_2d_are_equal				q_2d_float_are_equal
#	define q_2d_swap				q_2d_float_swap
#	define q_2d_contains				q_2d_float_contains
#	define q_2d_add					q_2d_float_add
#	define q_2d_subtract				q_2d_float_subtract
#	define q_2d_multiply				q_2d_float_multiply
#	define q_2d_divide				q_2d_float_divide
#	define q_2d_dot_product				q_2d_float_dot_product
#	define q_2d_cross_product			q_2d_float_cross_product
#	define q_2d_minimum				q_2d_float_minimum
#	define q_2d_maximum				q_2d_float_maximum
#	define q_2d_middle				q_2d_float_middle
#	define q_2d_fit					q_2d_float_fit
#	define q_2d_lerp				q_2d_float_lerp
#	define q_2d_is_zero				q_2d_float_is_zero
#	define q_2d_negative				q_2d_float_negative
#	define q_2d_absolute				q_2d_float_absolute
#	define q_2d_area				q_2d_float_area
#	define q_2d_square_length			q_2d_float_square_length
#	define q_2d_multiply_by_scalar			q_2d_float_multiply_by_scalar
#	define q_2d_divide_by_scalar			q_2d_float_divide_by_scalar
#	define q_2d_clamp				q_2d_float_clamp
#	define q_2d_square_clamp			q_2d_float_square_clamp

#	define q_3d					q_3d_float
#	define q_3d_zero				q_3d_float_zero
#	define q_3d_are_equal				q_3d_float_are_equal
#	define q_3d_swap				q_3d_float_swap
#	define q_3d_contains				q_3d_float_contains
#	define q_3d_add					q_3d_float_add
#	define q_3d_subtract				q_3d_float_subtract
#	define q_3d_multiply				q_3d_float_multiply
#	define q_3d_divide				q_3d_float_divide
#	define q_3d_dot_product				q_3d_float_dot_product
#	define q_3d_cross_product			q_3d_float_cross_product
#	define q_3d_minimum				q_3d_float_minimum
#	define q_3d_maximum				q_3d_float_maximum
#	define q_3d_middle				q_3d_float_middle
#	define q_3d_fit					q_3d_float_fit
#	define q_3d_lerp				q_3d_float_lerp
#	define q_3d_is_zero				q_3d_float_is_zero
#	define q_3d_negative				q_3d_float_negative
#	define q_3d_absolute				q_3d_float_absolute
#	define q_3d_volume				q_3d_float_volume
#	define q_3d_square_length			q_3d_float_square_length
#	define q_3d_multiply_by_scalar			q_3d_float_multiply_by_scalar
#	define q_3d_divide_by_scalar			q_3d_float_divide_by_scalar
#	define q_3d_clamp				q_3d_float_clamp
#	define q_3d_cube_clamp				q_3d_float_cube_clamp
#	define q_3d_rotated_as_axes			q_3d_float_rotated_as_axes

#	define q_2d_vector				q_2d_float_vector
#	define q_2d_vector_zero				q_2d_float_vector_zero
#	define q_2d_vector_are_equal			q_2d_float_vector_are_equal

#	define q_3d_vector				q_3d_float_vector
#	define q_3d_vector_zero				q_3d_float_vector_zero
#	define q_3d_vector_are_equal			q_3d_float_vector_are_equal

#	define q_2d_line				q_2d_float_line
#	define q_2d_line_zero				q_2d_float_line_zero
#	define q_2d_line_are_equal			q_2d_float_line_are_equal
#	define q_2d_line_segment_center			q_2d_float_line_segment_center

#	define q_3d_line				q_3d_float_line
#	define q_3d_line_zero				q_3d_float_line_zero
#	define q_3d_line_are_equal			q_3d_float_line_are_equal
#	define q_3d_line_segment_center			q_3d_float_line_segment_center

#	define q_rectangle				q_float_rectangle
#	define q_rectangle_zero				q_float_rectangle_zero
#	define q_rectangle_are_equal			q_float_rectangle_are_equal
#	define q_rectangle_contains			q_float_rectangle_contains
#	define q_rectangle_collision			q_float_rectangle_collision
#	define q_rectangle_intersection			q_float_rectangle_intersection
#	define q_rectangle_union			q_float_rectangle_union
#	define q_rectangle_by_vertices			q_float_rectangle_by_vertices
#	define q_rectangle_center			q_float_rectangle_center
#	define q_rectangle_minimum_x			q_float_rectangle_minimum_x
#	define q_rectangle_minimum_y			q_float_rectangle_minimum_y
#	define q_rectangle_maximum_x			q_float_rectangle_maximum_x
#	define q_rectangle_maximum_y			q_float_rectangle_maximum_y
#	define q_rectangle_middle_x			q_float_rectangle_middle_x
#	define q_rectangle_middle_y			q_float_rectangle_middle_y
#	define q_rectangle_contains_point		q_float_rectangle_contains_point
#	define q_rectangle_contains_line_segment	q_float_rectangle_contains_line_segment

#	define q_box					q_float_box
#	define q_box_zero				q_float_box_zero
#	define q_box_are_equal				q_float_box_are_equal

#	define q_circle					q_float_cirlce
#	define q_circle_zero				q_float_circle_zero
#	define q_circle_are_equal			q_float_circle_are_equal

#	define q_sphere					q_float_sphere
#	define q_sphere_zero				q_float_sphere_zero
#	define q_sphere_are_equal			q_float_sphere_are_equal

#elif defined(Q_USE_REAL_LDOUBLE)

#	define q_minimum				q_ldouble_minimum
#	define q_maximum				q_ldouble_maximum
#	define q_lerp					q_ldouble_lerp
#	define q_absolute				q_ldouble_absolute
#	define q_clamp					q_ldouble_clamp

#	define q_2d					q_2d_ldouble
#	define q_2d_zero				q_2d_ldouble_zero
#	define q_2d_are_equal				q_2d_ldouble_are_equal
#	define q_2d_swap				q_2d_ldouble_swap
#	define q_2d_contains				q_2d_ldouble_contains
#	define q_2d_add					q_2d_ldouble_add
#	define q_2d_subtract				q_2d_ldouble_subtract
#	define q_2d_multiply				q_2d_ldouble_multiply
#	define q_2d_divide				q_2d_ldouble_divide
#	define q_2d_dot_product				q_2d_ldouble_dot_product
#	define q_2d_cross_product			q_2d_ldouble_cross_product
#	define q_2d_minimum				q_2d_ldouble_minimum
#	define q_2d_maximum				q_2d_ldouble_maximum
#	define q_2d_middle				q_2d_ldouble_middle
#	define q_2d_fit					q_2d_ldouble_fit
#	define q_2d_lerp				q_2d_ldouble_lerp
#	define q_2d_is_zero				q_2d_ldouble_is_zero
#	define q_2d_negative				q_2d_ldouble_negative
#	define q_2d_absolute				q_2d_ldouble_absolute
#	define q_2d_area				q_2d_ldouble_area
#	define q_2d_square_length			q_2d_ldouble_square_length
#	define q_2d_multiply_by_scalar			q_2d_ldouble_multiply_by_scalar
#	define q_2d_divide_by_scalar			q_2d_ldouble_divide_by_scalar
#	define q_2d_clamp				q_2d_ldouble_clamp
#	define q_2d_square_clamp			q_2d_ldouble_square_clamp

#	define q_3d					q_3d_ldouble
#	define q_3d_zero				q_3d_ldouble_zero
#	define q_3d_are_equal				q_3d_ldouble_are_equal
#	define q_3d_swap				q_3d_ldouble_swap
#	define q_3d_contains				q_3d_ldouble_contains
#	define q_3d_add					q_3d_ldouble_add
#	define q_3d_subtract				q_3d_ldouble_subtract
#	define q_3d_multiply				q_3d_ldouble_multiply
#	define q_3d_divide				q_3d_ldouble_divide
#	define q_3d_dot_product				q_3d_ldouble_dot_product
#	define q_3d_cross_product			q_3d_ldouble_cross_product
#	define q_3d_minimum				q_3d_ldouble_minimum
#	define q_3d_maximum				q_3d_ldouble_maximum
#	define q_3d_middle				q_3d_ldouble_middle
#	define q_3d_fit					q_3d_ldouble_fit
#	define q_3d_lerp				q_3d_ldouble_lerp
#	define q_3d_is_zero				q_3d_ldouble_is_zero
#	define q_3d_negative				q_3d_ldouble_negative
#	define q_3d_absolute				q_3d_ldouble_absolute
#	define q_3d_volume				q_3d_ldouble_volume
#	define q_3d_square_length			q_3d_ldouble_square_length
#	define q_3d_multiply_by_scalar			q_3d_ldouble_multiply_by_scalar
#	define q_3d_divide_by_scalar			q_3d_ldouble_divide_by_scalar
#	define q_3d_clamp				q_3d_ldouble_clamp
#	define q_3d_cube_clamp				q_3d_ldouble_cube_clamp
#	define q_3d_rotated_as_axes			q_3d_ldouble_rotated_as_axes

#	define q_2d_vector				q_2d_ldouble_vector
#	define q_2d_vector_zero				q_2d_ldouble_vector_zero
#	define q_2d_vector_are_equal			q_2d_ldouble_vector_are_equal

#	define q_3d_vector				q_3d_ldouble_vector
#	define q_3d_vector_zero				q_3d_ldouble_vector_zero
#	define q_3d_vector_are_equal			q_3d_ldouble_vector_are_equal

#	define q_2d_line				q_2d_ldouble_line
#	define q_2d_line_zero				q_2d_ldouble_line_zero
#	define q_2d_line_are_equal			q_2d_ldouble_line_are_equal
#	define q_2d_line_segment_center			q_2d_ldouble_line_segment_center

#	define q_3d_line				q_3d_ldouble_line
#	define q_3d_line_zero				q_3d_ldouble_line_zero
#	define q_3d_line_are_equal			q_3d_ldouble_line_are_equal
#	define q_3d_line_segment_center			q_3d_ldouble_line_segment_center

#	define q_rectangle				q_ldouble_rectangle
#	define q_rectangle_zero				q_ldouble_rectangle_zero
#	define q_rectangle_are_equal			q_ldouble_rectangle_are_equal
#	define q_rectangle_contains			q_ldouble_rectangle_contains
#	define q_rectangle_collision			q_ldouble_rectangle_collision
#	define q_rectangle_intersection			q_ldouble_rectangle_intersection
#	define q_rectangle_union			q_ldouble_rectangle_union
#	define q_rectangle_by_vertices			q_ldouble_rectangle_by_vertices
#	define q_rectangle_center			q_ldouble_rectangle_center
#	define q_rectangle_minimum_x			q_ldouble_rectangle_minimum_x
#	define q_rectangle_minimum_y			q_ldouble_rectangle_minimum_y
#	define q_rectangle_maximum_x			q_ldouble_rectangle_maximum_x
#	define q_rectangle_maximum_y			q_ldouble_rectangle_maximum_y
#	define q_rectangle_middle_x			q_ldouble_rectangle_middle_x
#	define q_rectangle_middle_y			q_ldouble_rectangle_middle_y
#	define q_rectangle_contains_point		q_ldouble_rectangle_contains_point
#	define q_rectangle_contains_line_segment	q_ldouble_rectangle_contains_line_segment

#	define q_box					q_ldouble_box
#	define q_box_zero				q_ldouble_box_zero
#	define q_box_are_equal				q_ldouble_box_are_equal

#	define q_circle					q_ldouble_cirlce
#	define q_circle_zero				q_ldouble_circle_zero
#	define q_circle_are_equal			q_ldouble_circle_are_equal

#	define q_sphere					q_ldouble_sphere
#	define q_sphere_zero				q_ldouble_sphere_zero
#	define q_sphere_are_equal			q_ldouble_sphere_are_equal

#else

#	define q_minimum				q_double_minimum
#	define q_maximum				q_double_maximum
#	define q_lerp					q_double_lerp
#	define q_absolute				q_double_absolute
#	define q_clamp					q_double_clamp

#	define q_2d					q_2d_double
#	define q_2d_zero				q_2d_double_zero
#	define q_2d_are_equal				q_2d_double_are_equal
#	define q_2d_swap				q_2d_double_swap
#	define q_2d_contains				q_2d_double_contains
#	define q_2d_add					q_2d_double_add
#	define q_2d_subtract				q_2d_double_subtract
#	define q_2d_multiply				q_2d_double_multiply
#	define q_2d_divide				q_2d_double_divide
#	define q_2d_dot_product				q_2d_double_dot_product
#	define q_2d_cross_product			q_2d_double_cross_product
#	define q_2d_minimum				q_2d_double_minimum
#	define q_2d_maximum				q_2d_double_maximum
#	define q_2d_middle				q_2d_double_middle
#	define q_2d_fit					q_2d_double_fit
#	define q_2d_lerp				q_2d_double_lerp
#	define q_2d_is_zero				q_2d_double_is_zero
#	define q_2d_negative				q_2d_double_negative
#	define q_2d_absolute				q_2d_double_absolute
#	define q_2d_area				q_2d_double_area
#	define q_2d_square_length			q_2d_double_square_length
#	define q_2d_multiply_by_scalar			q_2d_double_multiply_by_scalar
#	define q_2d_divide_by_scalar			q_2d_double_divide_by_scalar
#	define q_2d_clamp				q_2d_double_clamp
#	define q_2d_square_clamp			q_2d_double_square_clamp

#	define q_3d					q_3d_double
#	define q_3d_zero				q_3d_double_zero
#	define q_3d_are_equal				q_3d_double_are_equal
#	define q_3d_swap				q_3d_double_swap
#	define q_3d_contains				q_3d_double_contains
#	define q_3d_add					q_3d_double_add
#	define q_3d_subtract				q_3d_double_subtract
#	define q_3d_multiply				q_3d_double_multiply
#	define q_3d_divide				q_3d_double_divide
#	define q_3d_dot_product				q_3d_double_dot_product
#	define q_3d_cross_product			q_3d_double_cross_product
#	define q_3d_minimum				q_3d_double_minimum
#	define q_3d_maximum				q_3d_double_maximum
#	define q_3d_middle				q_3d_double_middle
#	define q_3d_fit					q_3d_double_fit
#	define q_3d_lerp				q_3d_double_lerp
#	define q_3d_is_zero				q_3d_double_is_zero
#	define q_3d_negative				q_3d_double_negative
#	define q_3d_absolute				q_3d_double_absolute
#	define q_3d_volume				q_3d_double_volume
#	define q_3d_square_length			q_3d_double_square_length
#	define q_3d_multiply_by_scalar			q_3d_double_multiply_by_scalar
#	define q_3d_divide_by_scalar			q_3d_double_divide_by_scalar
#	define q_3d_clamp				q_3d_double_clamp
#	define q_3d_cube_clamp				q_3d_double_cube_clamp
#	define q_3d_rotated_as_axes			q_3d_double_rotated_as_axes

#	define q_2d_vector				q_2d_double_vector
#	define q_2d_vector_zero				q_2d_double_vector_zero
#	define q_2d_vector_are_equal			q_2d_double_vector_are_equal

#	define q_3d_vector				q_3d_double_vector
#	define q_3d_vector_zero				q_3d_double_vector_zero
#	define q_3d_vector_are_equal			q_3d_double_vector_are_equal

#	define q_2d_line				q_2d_double_line
#	define q_2d_line_zero				q_2d_double_line_zero
#	define q_2d_line_are_equal			q_2d_double_line_are_equal
#	define q_2d_line_segment_center			q_2d_double_line_segment_center

#	define q_3d_line				q_3d_double_line
#	define q_3d_line_zero				q_3d_double_line_zero
#	define q_3d_line_are_equal			q_3d_double_line_are_equal
#	define q_3d_line_segment_center			q_3d_double_line_segment_center

#	define q_rectangle				q_double_rectangle
#	define q_rectangle_zero				q_double_rectangle_zero
#	define q_rectangle_are_equal			q_double_rectangle_are_equal
#	define q_rectangle_contains			q_double_rectangle_contains
#	define q_rectangle_collision			q_double_rectangle_collision
#	define q_rectangle_intersection			q_double_rectangle_intersection
#	define q_rectangle_union			q_double_rectangle_union
#	define q_rectangle_by_vertices			q_double_rectangle_by_vertices
#	define q_rectangle_center			q_double_rectangle_center
#	define q_rectangle_minimum_x			q_double_rectangle_minimum_x
#	define q_rectangle_minimum_y			q_double_rectangle_minimum_y
#	define q_rectangle_maximum_x			q_double_rectangle_maximum_x
#	define q_rectangle_maximum_y			q_double_rectangle_maximum_y
#	define q_rectangle_middle_x			q_double_rectangle_middle_x
#	define q_rectangle_middle_y			q_double_rectangle_middle_y
#	define q_rectangle_contains_point		q_double_rectangle_contains_point
#	define q_rectangle_contains_line_segment	q_double_rectangle_contains_line_segment

#	define q_box					q_double_box
#	define q_box_zero				q_double_box_zero
#	define q_box_are_equal				q_double_box_are_equal

#	define q_circle					q_double_cirlce
#	define q_circle_zero				q_double_circle_zero
#	define q_circle_are_equal			q_double_circle_are_equal

#	define q_sphere					q_double_sphere
#	define q_sphere_zero				q_double_sphere_zero
#	define q_sphere_are_equal			q_double_sphere_are_equal

#endif

#endif /* __Q_functions_mathematics_H__ */
