/**
 *
 * **Vector3d.cpp**
 * 
 * This file shows the implemented functions of our vector library
 * 
 * ----
 * 
 * Created by Michael Chang on 2020-11-14
 * 
 * Copyright (c) 2020. All rights reserved.
 *  
 */

#include "Vector3d.h"

namespace R3DMathEngine
{
        Vector3d::Vector3d()
        {
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        }

        Vector3d::Vector3d(float uX, float uY, float uZ)
        {
            x = uX;
            y = uY;
            z = uZ;
        }

        Vector3d::~Vector3d(){}

        Vector3d::Vector3d(const Vector3d &v)
        {
            this->x = v.x;
            this->y = v.y;
            this->z = v.z;
        }

        Vector3d &Vector3d::operator=(const Vector3d &v)
        {
            x = v.x;
            y = v.y;
            z = v.z;

            return *this;
        }

        void Vector3d::operator+=(const Vector3d &v)
        {
            x += v.x;
            y += v.y;
            z += v.z;
        }

        Vector3d Vector3d::operator+(const Vector3d &v) const
        {
            return Vector3d(x + v.x, y + v.y, z + v.z);
        }

        void Vector3d::operator-=(const Vector3d &v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;
        }

        Vector3d Vector3d::operator-(const Vector3d &v) const
        {
            return Vector3d(x - v.x, y - v.y, z - v.z);
        }
        
        void Vector3d::operator*=(const float s)
        {
            x *= s;
            y *= s;
            z *= s;
        }

        Vector3d Vector3d::operator*(const float s) const
        {
            return Vector3d( s * x, s * y, s * z );
        }

        void Vector3d::operator/=(const float s)
        {
            x /= s;
            y /= s;
            z /= s;
        }

        Vector3d Vector3d::operator/(const float s) const
        {
            return Vector3d( x / s, y / s, z / s );
        }

        float Vector3d::operator*(const Vector3d &v) const
        {
            return x * v.x + y * v.y + z * v.z;
        }

        float Vector3d::dot(const Vector3d &v) const
        {
            return x * v.x + y * v.y + z * v.z;
        }

        Vector3d Vector3d::cross(const Vector3d &v) const
        {
            return Vector3d(y * v.z - z * v.y, 
                            z * v.x - x * v.z, 
                            x * v.y - y * v.x);
        }

        void Vector3d::operator%=(const Vector3d &v)
        {
            *this = cross(v);
        }

        Vector3d Vector3d::operator%(const Vector3d &v) const
        {
            return Vector3d(y * v.z - z * v.y, 
                            z * v.x - x * v.z, 
                            x * v.y - y * v.x);
        }

        float Vector3d::magnitude()
        {
            float magnitude = sqrt(x*x + y*y + z*z);
            return magnitude;
        }

        void Vector3d::normalize()
        {
            float mag = sqrt(x * x + y * y + z * z);

            if (mag > 0.0f)
            {
                float oneOverMag = 1.0f / mag;

                x = x * oneOverMag;
                y = y * oneOverMag;
                z = z * oneOverMag;
            }
        }

        ostream& operator << (ostream& stream, const Vector3d &vector)
        {
            stream << "Vector3d (" << vector.x << ", " << vector.y << ", " << vector.z << ")";
            return stream;
        }

}