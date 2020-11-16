#include "Vector3d.h"

int main()
{
    using namespace R3DMathEngine;

    Vector3d vector1(2.0f, 3.0f, 1.0f);
    Vector3d vector2(1.0f, 2.0f, 0.0f);
    
    /* Vector Addition */
    // Vector3d vector3 = vector1 + vector2;

    /* Vector Subtraction */
    // Vector3d vector3 = vector1 - vector2;

    /* Scalar Multiplication */
    // Vector3d vector3 = vector2 * 5.0f;

    /* Scalar Division */
    // Vector3d vector4 = vector2 / 5.0;

    // cout << "Vector 3 " << vector3 << endl;
    // cout << "Vector 4 " << vector4 << endl;

    /* Dot Product */
    // float dotProduct1 = vector1.dot(vector2);
    // float dotProduct2 = vector1 * vector2;

    // cout << "dotProduct1 " << dotProduct1 << endl;
    // cout << "dotProduct2 " << dotProduct2 << endl;

    /* Cross Product */
    // Vector3d vector3 = vector1.cross(vector2);
    // Vector3d vector4 = vector1 % vector2;
    // vector1 %= vector2;

    // cout << "Vector 3 " << vector3 << endl;
    // cout << "Vector 4 " << vector4 << endl;
    // cout << "Vector 1 " << vector1 << endl;

    /* Vector Magnitude */
    // float magnitude = vector1.magnitude();

    // cout << "Magnitude " << magnitude << endl;

    /* Normalize Vector */
    vector1.normalize();
    cout << vector1 << endl;
    
    /* Vector Addition */
    // vector1 += vector2;

    /* Vector Subtraction */
    // vector1 -= vector2;

    /* Scalar Multiplication */
    // vector1 *= 7.0f;

    /* Scalar Division */
    // vector2 /= 7.0f;

    // cout << "Vector 1 " << vector1 << endl;
    // cout << "Vector 2 " << vector2 << endl;

    return 0;
}