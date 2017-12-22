#ifndef MATH_VECTOR_H
#define MATH_VECTOR_H

namespace Math
{
	struct Vector
	{
		//  v
		// [x]
		// [y]
		float x;
		float y;
	};

	inline Vector operator+(Vector a, Vector b)
	{
		a.x += b.x;
		a.y += b.y;
		return a;
	}

	inline Vector operator*(Vector a, Vector b)
	{
		a.x *= b.x;
		a.y *= b.y;
		return a;
	}

	/*inline Vector operator*(Vector v, float s)
	{
		v.x *= s;
		v.y *= s;
		return v;
	}*/

	bool linearlyDependant(Vector a, Vector b)
	{
		float gradientOfA = a.y / a.x;
		float gradientOfB = b.y / b.x;
		return gradientOfA == gradientOfB;
	}
}

#endif /* END VECTOR_H */