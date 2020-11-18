/**
 * 
 * **Quaternion3d.cpp**
 * 
 * This file shows the implemented functions of our quaternion library
 * 
 * ----
 * 
 * Created by Michael Chang 2020-11-17
 * 
 * Copyright (c) 2020. All rights reserved.
 * 
 */

#include "Quaternion3d.h"

namespace R3DMathEngine
{


    // Vector3d Quaternion3d::rotateVectorAboutAngleAndAxis(float uAngle, Vector3d &uAxis)
    // {
    //     // Convert Vector to quaternion
    //     Quaternion3d p( 0.0f, (*this));

    //     // Normalize the axis
    //     uAxis.normalize();

    //     // Create the real quaternion
    //     Quaternion3d q(uAngle, uAxis);

    //     // Convert quaternion to unit norm quaternion
    //     q.convertToUnitNormQuaternion();

    //     // Get the inverse of the quaternion
    //     Quaternion3d qInverse = q.inverse();

    //     // Rotate the quaternion
    //     Quaternion3d rotatedVector = q * p * qInverse;

    //     // Return the vector part of the quaternion
    //     return rotatedVector.v;
    // }



    Quaternion3d::Quaternion3d() {}

    Quaternion3d::Quaternion3d(float uS, Vector3d &uV)
    {
        s = uS;
        v = uV;
    }

    Quaternion3d::~Quaternion3d() {}

    Quaternion3d::Quaternion3d(const Quaternion3d &value)
    {
        s = value.s;
        v = value.v;
    }

    Quaternion3d &Quaternion3d::operator=(const Quaternion3d &value)
    {
        s = value.s;
        v = value.v;

        return *this;
    }

    Quaternion3d Quaternion3d::operator+(const Quaternion3d &quad) const
    {
        float scalar = s + quad.s;
        Vector3d imaginary = v + quad.v;

        return Quaternion3d(scalar, imaginary);
    }

    void Quaternion3d::operator+=(const Quaternion3d &quad)
    {
        s += quad.s;
        v += quad.v;
    }

    Quaternion3d Quaternion3d::operator-(const Quaternion3d &quad) const
    {
        float scalar = s - quad.s;
        Vector3d imaginary = v - quad.v;

        return Quaternion3d(scalar, imaginary);
    }

    void Quaternion3d::operator-=(const Quaternion3d &quad)
    {
        s -= quad.s;
        v -= quad.v;
    }

    void Quaternion3d::operator*=(const Quaternion3d &quad)
    {
        (*this) = multiply(quad);
    }

    Quaternion3d Quaternion3d::operator*(const Quaternion3d &quad) const
    {
        float scalar = s * quad.s - v.dot(quad.v);
        Vector3d imaginary = quad.v * s + v * quad.s + v.cross(quad.v);
        return Quaternion3d(scalar, imaginary);
    }

    Quaternion3d Quaternion3d::multiply(const Quaternion3d &quad) const
    {
        float scalar = s * quad.s - v.dot(quad.v);
        Vector3d imaginary = quad.v * s + v * quad.s + v.cross(quad.v);
        return Quaternion3d(scalar, imaginary);
    }

    Quaternion3d Quaternion3d::operator*(const float value) const
    {
        float scalar = s * value;
        Vector3d imaginary = v * value;

        return Quaternion3d(scalar, imaginary);
    }

    void Quaternion3d::operator*=(const float value)
    {
        s *= value;
        v *= value;
    }

    float Quaternion3d::norm()
    {
        float scalar = s * s;
        float imaginary = v * v;

        return sqrt(scalar + imaginary);
    }

    void Quaternion3d::normalize()
    {
        if (norm() != 0)
        {
            float normValue = 1 / norm();

            s *= normValue;
            v *= normValue;
        }
    }

    void Quaternion3d::convertToUnitNormQuaternion()
    {
        float angle = s * (3.141592653589793f / 180.0f); // DegreesToRadians(s);
        v.normalize();
        s = cosf(angle * 0.5);
        v = v * sinf(angle * 0.5);   
    }

    Quaternion3d Quaternion3d::conjugate()
    {
        float scalar = s;
        Vector3d imaginary = v * (-1);

        return Quaternion3d(scalar, imaginary);
    }

    Quaternion3d Quaternion3d::inverse()
    {
        float absoluteValue = norm();
        absoluteValue *= absoluteValue;
        absoluteValue = 1/absoluteValue;

        Quaternion3d conjugateValue = conjugate();

        float scalar = conjugateValue.s * absoluteValue;
        Vector3d imaginary = conjugateValue.v * absoluteValue;

        return Quaternion3d(scalar, imaginary);
    }

    void Quaternion3d::show()
    {
        cout << "Scalar " << s << "\n" << v << endl;
    }
}