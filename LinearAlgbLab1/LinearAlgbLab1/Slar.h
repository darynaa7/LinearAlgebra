#include "Matrix.h"
#pragma once


ref class Slar
{
private:
	Matrix^ A;
	Matrix^ x;
	Matrix^ b;
public:
	Slar(Matrix^ matrixA, Matrix^ vectorX, Matrix^ vectorB): A(matrixA), x(vectorX), b(vectorB){}

};

