#pragma once
#include "Object.h"
#include <string>
#include <iostream>
using namespace std;

class Vector3D 
{
private:
	double x;
	double y;
	double z;
public:
	Vector3D();
	Vector3D(double x, double y, double z);
	Vector3D(const Vector3D& other);

	~Vector3D();

	void Init(double x, double y, double z);
	
	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }

	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }
	friend ostream& operator << (ostream& out, const Vector3D& m);
	friend istream& operator >> (istream& in, Vector3D& m);
};