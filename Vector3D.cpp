#include "Vector3D.h"
#include <string>
using namespace std;

Vector3D::Vector3D() : x(0), y(0), z(0) {};

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {};

Vector3D::Vector3D(const Vector3D& other) : x(other.x), y(other.y), z(other.z) {}

Vector3D::~Vector3D() {};

void Vector3D::Init(double x, double y, double z)
{
	SetX(x);
	SetY(y);
	SetZ(z);
}

istream& operator >> (istream& input, Vector3D& vec)
{
	cout << "x: ";
	input >> vec.x;
	cout << "y: ";
	input >> vec.y;
	cout << "z: ";
	input >> vec.z;
	return input;
}

ostream& operator << (ostream& output, const Vector3D& vec)
{
	output << vec.x << ", " << vec.y << ", " << vec.z << endl;
	return output;
}

