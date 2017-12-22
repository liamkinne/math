#include "Vector.h"
#include "Matrix.h"
#include <iostream>

using namespace Math;

int main()
{
	Vector v = Matrix{Vector{1,0},Vector{1,1}} * Vector{1,1};


	std::cout << v.x << ", " << v.y << '\n';
	return 0;
}
