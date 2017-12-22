#ifndef MATRIX_H
#define MATRIX_H

#include "Vector.h"

namespace Math
{
	struct Matrix
	{
		//   i   j
		// [i.x j.x]
		// [i.y j.y]
		Vector i;
		Vector j;
	};

	inline Vector operator*(Matrix m, Vector v)
	{
		return Vector{(m.i.x*v.x)+(m.i.y*v.y),(m.j.x*v.x)+(m.j.y*v.y)};
	}

	inline Matrix operator*(Matrix m1, Matrix m2)
	{
		return Matrix{m2 * m1.i, m2 * m1.j};
	}
}

#endif /* END MATRIX_H */