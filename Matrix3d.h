/**
 * 
 * **Matrix3d.h**
 * 
 * This file shows the object structure of our matrix library
 * 
 * ----
 * 
 * Created by Michael Chang 2020-11-16
 * 
 * Copyright (c) 2020. All rights reserved.
 * 
 */

#include "Vector3d.h"

namespace R3DMathEngine
{
    class Matrix3d
    {
        private:

        public:
            
            // Matrix Data elements
            float matrixData[9] = { 0.0f, 0.0f, 0.0f,
                                    0.0f, 0.0f, 0.0f,
                                    0.0f, 0.0f, 0.0f };

            // Constructors
            Matrix3d();
            Matrix3d(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8);

            // Copy Constructors
            Matrix3d &operator=(const Matrix3d &value);

            // Destructor
            ~Matrix3d();

            // Matrix Addition
            Matrix3d operator+(const Matrix3d &mat) const;
            void operator+=(const Matrix3d &mat);

            // Matrix Subtraction
            Matrix3d operator-(const Matrix3d &mat) const;
            void operator-=(const Matrix3d &mat);

            // Matrix Scalar Multiplication
            Matrix3d operator*(const float s) const;
            void operator*=(const float s);

            // Matrix Scalar Division
            Matrix3d operator/(const float s) const;
            void operator/=(const float s);

            // Matrix Multiplication
            Matrix3d operator*(const Matrix3d &mat) const;
            void operator*=(const Matrix3d &mat);

            // Identity Matrix
            void setMatrixAsIdentityMatrix();

            // Inverse Matrix
            void setMatrixAsInverseOfGivenMatrix(const Matrix3d &mat);
            Matrix3d getInverseOfMatrix() const;
            void invertMatrix();

            // Transpose
            void setMatrixAsTransposeOfGivenMatrix(const Matrix3d &mat);
            Matrix3d getTransposeOfMatrix() const;

            // Vector Transformation
            Vector3d operator*(const Vector3d &vec) const;
            Vector3d transformVectorByMatrix(const Vector3d &vec) const;

            // Output Matrix
            void show();
    };
}