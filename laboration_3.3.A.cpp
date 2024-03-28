#include "D_Vector3D.h"
using namespace std;

int main() {
    D_Vector3D v1;
    cout << "Input vector_1 (x, y, z): ";
    cin >> v1;
    ++v1;
    D_Vector3D v2;
    cout << "Input vector_2 (x, y, z): ";
    cin >> v2;
    --v2;
    cout << "vector_1: " << v1 << endl;
    cout << "vector_2: " << v2 << endl;

    double scalar;
    cout << "Input scalar: ";  cin >> scalar;
    Vector3D scaled = scalar * v1;
    Vector3D scaled_2 = scalar * v2;

    cout << "Vector_1 dobutok scalar: " << scaled << endl;
    cout << "Vector_2 dobutok scalar: " << scaled_2 << endl;

    cout << "Len v1: " << v1() << endl;
    cout << "Len v2: " << v2() << endl;

    if (v1 == v2)
        cout << "v1 and v2 are same!" << endl;
    if (v1 != v2)
        cout << "v1 and v2 not same!" << endl;

    if (v1 ^ v2)
        cout << "Len are same!" << endl;
    else
        cout << "Len aren`t same!" << endl;

    cout << "V1 info: " << string(v1) << endl;
    cout << "V2 info: " << string(v2) << endl;
	return 0;
}