/**
 *
 * **Vector3d.h**
 * 
 * This file shows the object structure of our vector library
 * 
 * ----
 * 
 * Created by Michael Chang on 2020-11-14
 * 
 * Copyright (c) 2020. All rights reserved.
 *  
 */
#include <iostream>
#include <cmath>

using namespace std;

namespace R3DMathEngine
{
    class Vector3d
    {
        private:

        public:
            // Dimensions x, y, z
            float x, y, z;

            // Constructors
            Vector3d();
            Vector3d(float uX, float uY, float uZ);

            // Destructors
            ~Vector3d();

            // Copy Constructor
            Vector3d(const Vector3d &v);
            Vector3d &operator=(const Vector3d &v);

            // Add Vectors
            void operator+=(const Vector3d &v);
            Vector3d operator+(const Vector3d &v) const;

            // Subtracting Vectors
            void operator-=(const Vector3d &v);
            Vector3d operator-(const Vector3d &v) const;

            // Scalar Vectors Multiplication
            void operator*=(const float s);
            Vector3d operator*(const float s) const;

            // Scalar Vector Division
            void operator/=(const float s);
            Vector3d operator/(const float s) const;

            // Dot Product
            float operator*(const Vector3d &v) const;
            float dot(const Vector3d &v) const;

            // Cross Product
            Vector3d cross(const Vector3d &v) const;
            void operator%=(const Vector3d &v);
            Vector3d operator%(const Vector3d &v) const;

            // Vector Magnitude
            float magnitude();

            // Unit Vector (Normalize)
            void normalize();

            friend ostream& operator << (ostream& stream, const Vector3d &vector);
    };
}