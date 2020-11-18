/**
 * 
 * **Quaternion3d.h**
 * 
 * This file shows the object structure of our quaternion library
 * 
 * ----
 * 
 * Created by Michael Chang 2020-11-17
 * 
 * Copyright (c) 2020. All rights reserved.
 * 
 */

#include "Matrix3d.h"

namespace R3DMathEngine
{
    class Quaternion3d
    {
        private:

        public:

            // Scalar
            float s;

            // Vector 
            Vector3d v;

            // Constructor
            Quaternion3d();
            Quaternion3d(float uS, Vector3d &uV);

            // Desctrutor
            ~Quaternion3d();

            // Copy Constructor
            Quaternion3d(const Quaternion3d &value);
            Quaternion3d &operator=(const Quaternion3d &value);

            // Quaternion Addition
            Quaternion3d operator+(const Quaternion3d &quad) const;
            void operator+=(const Quaternion3d &quad);

            // Quaternion Subtraction
            Quaternion3d operator-(const Quaternion3d &quad) const;
            void operator-=(const Quaternion3d &quad);

            // Quaternion Multiplication
            void operator*=(const Quaternion3d &quad);
            Quaternion3d operator*(const Quaternion3d &quad) const;
            Quaternion3d multiply(const Quaternion3d &quad) const;

            // Scalar Multiplication
            Quaternion3d operator*(const float value) const;
            void operator*=(const float value);

            // Norm
            float norm();

            // Unit Norm
            void normalize();
            void convertToUnitNormQuaternion();

            // Conjugate
            Quaternion3d conjugate();

            // Inverse
            Quaternion3d inverse();

            // Output Quaternion
            void show();
    };
}