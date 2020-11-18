
#include "Quaternion3d.h"

int main()
{
    using namespace R3DMathEngine;

    // Vector3d vector1(2.0f, 3.0f, 1.0f);
    // Vector3d vector2(1.0f, 2.0f, 0.0f);
    
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
    // vector1.normalize();
    // cout << vector1 << endl;
    
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

    /* Matrix */

    // Matrix3d m(2,3,1,
    //            4,3,1,
    //            5,3,1);

    // Matrix3d a();

    // a.show();

    // Matrix3d m(2.0f, 3.0f, 1.0f, 
    //            2.0f, 1.0f, 4.0f, 
    //            5.0f, 3.0f, 2.0f);

    // Matrix3d n(5.0f, 3.0f, 2.0f, 
    //            2.0f, 1.0f, 1.0f, 
    //            5.0f, 3.0f, 2.0f);


    /* Adding matrices */
    // Matrix3d res = m + n;
    // m += n;

    /* Subtracting matrices */
    // Matrix3d res2 = m - n;
    // m -= n;

    /* Mutiplying Matrix (scalar) */
    // Matrix3d res = m * 3;
    // m *= 3;

    /* Dividing Matrix (scalar) */
    // Matrix3d res = m / 3;
    // m /= 3;

    /* Matrix Multiplication */
    // Matrix3d res = m * n;
    // m *= n;

    /* Identity Matrix */
    // m.setMatrixAsIdentityMatrix();

    /* Inverse Matrix */
    // Matrix3d res = m.getInverseOfMatrix();

    /* Transpose */
    // Matrix3d res = m.getTransposeOfMatrix();

    /* Vector Transformation */
    // Matrix3d m(0.0f, 0.0f, 0.0f, 
    //            0.0f, 0.0f, -1.0f, 
    //            0.0f, 1.0f, 0.0f);

    // Vector3d vec(0,1,0);

    // Vector3d vec1 = m * vec;

    // cout << vec1 << endl;

    /* Quaternion */

    // Quaternion3d q(90.0f, axis);
    // Quaternion3d p(10.0f, axis);


    /* Quaternion Addition */
    // Quaternion3d nQ = q + p;
    // q += p;

    /* Quaternion Scalar Multiplication */
    // Quaternion3d res = q * 3;
    // q *= 3;

    /* Quaternion Norm */
    // float magnitude = q.norm();

    /* Quaternion Conjugate */
    // Quaternion3d conjugate = q.conjugate();

    /* Quaternion Inverse */
    // Quaternion3d inverseQua = q.inverse();

    /* Vector Rotation */

    Vector3d v(0,1,0);
    Vector3d axis(1,0,0);

    Vector3d rotatedVector = v.rotateVectorAboutAngleAndAxis(90.0f, axis);

    cout << rotatedVector << endl;



    return 0;
}