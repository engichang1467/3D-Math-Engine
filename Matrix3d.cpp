/**
 * 
 * **Matrix3d.cpp**
 * 
 * This file shows the implemented functions of our matrix library
 * 
 * ----
 * 
 * Created by Michael Chang 2020-11-16
 * 
 * Copyright (c) 2020. All rights reserved.
 * 
 */

#include "Matrix3d.h"

namespace R3DMathEngine
{
    Matrix3d::Matrix3d()
    {
        /**
         * 3x3 matrix - column major. X vector is 0, 1, 2, etc (OpenGL prefer way)
         *      0   3   6
         *      1   4   7
         *      2   5   8
         */

        for (int i = 0; i < 9; i++)
        {
            matrixData[i] = 0.0f;
        }

        matrixData[0] = 1.0f;
        matrixData[4] = 1.0f;
        matrixData[8] = 1.0f;
    }

    Matrix3d::Matrix3d(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8)
    {
        matrixData[0] = m0;
        matrixData[3] = m3;
        matrixData[6] = m6;

        matrixData[1] = m1;
        matrixData[4] = m4;
        matrixData[7] = m7;

        matrixData[2] = m2;
        matrixData[5] = m5;
        matrixData[8] = m8;
    }

    Matrix3d &Matrix3d::operator=(const Matrix3d &value)
    {
        for (int i = 0; i < 9; i++)
        {
            matrixData[i] = value.matrixData[i];
        }
        return *this;
    }

    Matrix3d::~Matrix3d(){}

    Matrix3d Matrix3d::operator+(const Matrix3d &mat) const
    {
        Matrix3d newMat;

        newMat.matrixData[0] = matrixData[0] + mat.matrixData[0];
        newMat.matrixData[3] = matrixData[3] + mat.matrixData[3];
        newMat.matrixData[6] = matrixData[6] + mat.matrixData[6];

        newMat.matrixData[1] = matrixData[1] + mat.matrixData[1];
        newMat.matrixData[4] = matrixData[4] + mat.matrixData[4];
        newMat.matrixData[7] = matrixData[7] + mat.matrixData[7];

        newMat.matrixData[2] = matrixData[2] + mat.matrixData[2];
        newMat.matrixData[5] = matrixData[5] + mat.matrixData[5];
        newMat.matrixData[8] = matrixData[8] + mat.matrixData[8];

        return newMat;
    }
    
    void Matrix3d::operator+=(const Matrix3d &mat)
    {
        matrixData[0] += mat.matrixData[0];
        matrixData[3] += mat.matrixData[3];
        matrixData[6] += mat.matrixData[6];

        matrixData[1] += mat.matrixData[1];
        matrixData[4] += mat.matrixData[4];
        matrixData[7] += mat.matrixData[7];

        matrixData[2] += mat.matrixData[2];
        matrixData[5] += mat.matrixData[5];
        matrixData[8] += mat.matrixData[8];
    }

    Matrix3d Matrix3d::operator-(const Matrix3d &mat) const
    {
        Matrix3d newMat;

        newMat.matrixData[0] = matrixData[0] - mat.matrixData[0];
        newMat.matrixData[3] = matrixData[3] - mat.matrixData[3];
        newMat.matrixData[6] = matrixData[6] - mat.matrixData[6];

        newMat.matrixData[1] = matrixData[1] - mat.matrixData[1];
        newMat.matrixData[4] = matrixData[4] - mat.matrixData[4];
        newMat.matrixData[7] = matrixData[7] - mat.matrixData[7];

        newMat.matrixData[2] = matrixData[2] - mat.matrixData[2];
        newMat.matrixData[5] = matrixData[5] - mat.matrixData[5];
        newMat.matrixData[8] = matrixData[8] - mat.matrixData[8];

        return newMat;
    }
    
    void Matrix3d::operator-=(const Matrix3d &mat)
    {
        matrixData[0] -= mat.matrixData[0];
        matrixData[3] -= mat.matrixData[3];
        matrixData[6] -= mat.matrixData[6];

        matrixData[1] -= mat.matrixData[1];
        matrixData[4] -= mat.matrixData[4];
        matrixData[7] -= mat.matrixData[7];

        matrixData[2] -= mat.matrixData[2];
        matrixData[5] -= mat.matrixData[5];
        matrixData[8] -= mat.matrixData[8];
    }

    Matrix3d Matrix3d::operator*(const float s) const
    {
        Matrix3d newMat;

        newMat.matrixData[0] = matrixData[0] * s;
        newMat.matrixData[3] = matrixData[3] * s;
        newMat.matrixData[6] = matrixData[6] * s;

        newMat.matrixData[1] = matrixData[1] * s;
        newMat.matrixData[4] = matrixData[4] * s;
        newMat.matrixData[7] = matrixData[7] * s;

        newMat.matrixData[2] = matrixData[2] * s;
        newMat.matrixData[5] = matrixData[5] * s;
        newMat.matrixData[8] = matrixData[8] * s;

        return newMat;
    }

    void Matrix3d::operator*=(const float s)
    {
        matrixData[0] *= s;
        matrixData[3] *= s;
        matrixData[6] *= s;

        matrixData[1] *= s;
        matrixData[4] *= s;
        matrixData[7] *= s;

        matrixData[2] *= s;
        matrixData[5] *= s;
        matrixData[8] *= s;
    }

    Matrix3d Matrix3d::operator/(const float s) const
    {
        Matrix3d newMat;

        newMat.matrixData[0] = matrixData[0] / s;
        newMat.matrixData[3] = matrixData[3] / s;
        newMat.matrixData[6] = matrixData[6] / s;

        newMat.matrixData[1] = matrixData[1] / s;
        newMat.matrixData[4] = matrixData[4] / s;
        newMat.matrixData[7] = matrixData[7] / s;

        newMat.matrixData[2] = matrixData[2] / s;
        newMat.matrixData[5] = matrixData[5] / s;
        newMat.matrixData[8] = matrixData[8] / s;

        return newMat;
    }

    void Matrix3d::operator/=(const float s)
    {
        matrixData[0] /= s;
        matrixData[3] /= s;
        matrixData[6] /= s;

        matrixData[1] /= s;
        matrixData[4] /= s;
        matrixData[7] /= s;

        matrixData[2] /= s;
        matrixData[5] /= s;
        matrixData[8] /= s;
    }

    Matrix3d Matrix3d::operator*(const Matrix3d &mat) const
    {
        return Matrix3d(matrixData[0] * mat.matrixData[0] + matrixData[3] * mat.matrixData[1] + matrixData[6] * mat.matrixData[2],
                        matrixData[0] * mat.matrixData[3] + matrixData[3] * mat.matrixData[4] + matrixData[6] * mat.matrixData[5],
                        matrixData[0] * mat.matrixData[6] + matrixData[3] * mat.matrixData[7] + matrixData[6] * mat.matrixData[8],
                        
                        matrixData[1] * mat.matrixData[0] + matrixData[4] * mat.matrixData[1] + matrixData[7] * mat.matrixData[2],
                        matrixData[1] * mat.matrixData[3] + matrixData[4] * mat.matrixData[4] + matrixData[7] * mat.matrixData[5],
                        matrixData[1] * mat.matrixData[6] + matrixData[4] * mat.matrixData[7] + matrixData[7] * mat.matrixData[8],
                        
                        matrixData[2] * mat.matrixData[0] + matrixData[5] * mat.matrixData[1] + matrixData[8] * mat.matrixData[2],
                        matrixData[2] * mat.matrixData[3] + matrixData[5] * mat.matrixData[4] + matrixData[8] * mat.matrixData[5],
                        matrixData[2] * mat.matrixData[6] + matrixData[5] * mat.matrixData[7] + matrixData[8] * mat.matrixData[8]);
    }

    void Matrix3d::operator*=(const Matrix3d &mat)
    {
        float t1, t2, t3;

        t1 = matrixData[0] * mat.matrixData[0] + matrixData[3] * mat.matrixData[1] + matrixData[6] * mat.matrixData[2];
        t2 = matrixData[0] * mat.matrixData[3] + matrixData[3] * mat.matrixData[4] + matrixData[6] * mat.matrixData[5];
        t3 = matrixData[0] * mat.matrixData[6] + matrixData[3] * mat.matrixData[7] + matrixData[6] * mat.matrixData[8];

        matrixData[0] = t1;
        matrixData[3] = t2;
        matrixData[6] = t3;
                        
        t1 = matrixData[1] * mat.matrixData[0] + matrixData[4] * mat.matrixData[1] + matrixData[7] * mat.matrixData[2];
        t2 = matrixData[1] * mat.matrixData[3] + matrixData[4] * mat.matrixData[4] + matrixData[7] * mat.matrixData[5];
        t3 = matrixData[1] * mat.matrixData[6] + matrixData[4] * mat.matrixData[7] + matrixData[7] * mat.matrixData[8];

        matrixData[1] = t1;
        matrixData[4] = t2;
        matrixData[7] = t3;
                        
        t1 = matrixData[2] * mat.matrixData[0] + matrixData[5] * mat.matrixData[1] + matrixData[8] * mat.matrixData[2];
        t2 = matrixData[2] * mat.matrixData[3] + matrixData[5] * mat.matrixData[4] + matrixData[8] * mat.matrixData[5];
        t3 = matrixData[2] * mat.matrixData[6] + matrixData[5] * mat.matrixData[7] + matrixData[8] * mat.matrixData[8];

        matrixData[2] = t1;
        matrixData[5] = t2;
        matrixData[8] = t3;
    }

    void Matrix3d::setMatrixAsIdentityMatrix()
    {
        for (int i = 0; i < 9; i++)
        {
            matrixData[i] = 0.0f;
        }

        matrixData[0] = 1.0f;
        matrixData[4] = 1.0f;
        matrixData[8] = 1.0f;
    }

    void Matrix3d::setMatrixAsInverseOfGivenMatrix(const Matrix3d &mat)
    {
        float t1 = mat.matrixData[0] * mat.matrixData[4];
        float t2 = mat.matrixData[0] * mat.matrixData[7];
        float t3 = mat.matrixData[3] * mat.matrixData[1];
        float t4 = mat.matrixData[6] * mat.matrixData[1];
        float t5 = mat.matrixData[3] * mat.matrixData[2];
        float t6 = mat.matrixData[6] * mat.matrixData[2];

        // Calculate determinant
        float det = (t1 * mat.matrixData[8] - t2 * mat.matrixData[5] - t3 * mat.matrixData[8] + t4 * mat.matrixData[5] + t5 * mat.matrixData[7] - t6 * mat.matrixData[4]);

        // Check if the determine is non-zero
        if (det == 0.0) return;

        float invd = 1.0f / det;

        float m0 = (mat.matrixData[4] * mat.matrixData[8] - mat.matrixData[7] * mat.matrixData[5]) * invd;
        
        float m3 = -(mat.matrixData[3] * mat.matrixData[8] - mat.matrixData[6] * mat.matrixData[5]) * invd;

        float m6 = (mat.matrixData[3] * mat.matrixData[7] - mat.matrixData[6] * mat.matrixData[4]) * invd;

        float m1 = -(mat.matrixData[1] * mat.matrixData[8] - mat.matrixData[7] * mat.matrixData[2]) * invd;

        float m4 = (mat.matrixData[0] * mat.matrixData[8] - t6) * invd;

        float m7 = -(t2 - t4) * invd;

        float m2 = (mat.matrixData[1] * mat.matrixData[5] - mat.matrixData[4] * mat.matrixData[2]) * invd;

        float m5 = -(mat.matrixData[0] * mat.matrixData[5] - t5) * invd;

        float m8 = (t1 - t3) * invd;

        matrixData[0] = m0;
        matrixData[3] = m3;
        matrixData[6] = m6;

        matrixData[1] = m1;
        matrixData[4] = m4;
        matrixData[7] = m7;

        matrixData[2] = m2;
        matrixData[5] = m5;
        matrixData[8] = m8;
    }

    Matrix3d Matrix3d::getInverseOfMatrix() const
    {
        Matrix3d result;
        result.setMatrixAsInverseOfGivenMatrix(*this);
        return result;
    }

    void Matrix3d::invertMatrix()
    {
        setMatrixAsInverseOfGivenMatrix(*this);
    }

    void Matrix3d::setMatrixAsTransposeOfGivenMatrix(const Matrix3d &mat)
    {
        matrixData[0] = mat.matrixData[0];
        matrixData[3] = mat.matrixData[1];
        matrixData[6] = mat.matrixData[2];

        matrixData[1] = mat.matrixData[3];
        matrixData[4] = mat.matrixData[4];
        matrixData[7] = mat.matrixData[5];

        matrixData[2] = mat.matrixData[6];
        matrixData[5] = mat.matrixData[7];
        matrixData[8] = mat.matrixData[8];
    }

    Matrix3d Matrix3d::getTransposeOfMatrix() const
    {
        Matrix3d result;
        result.setMatrixAsTransposeOfGivenMatrix(*this);
        return result;
    }

    Vector3d Matrix3d::operator*(const Vector3d &vec) const
    {
        return Vector3d(matrixData[0] * vec.x + matrixData[3] * vec.y + matrixData[6] * vec.z,
                        matrixData[1] * vec.x + matrixData[4] * vec.y + matrixData[7] * vec.z,
                        matrixData[2] * vec.x + matrixData[5] * vec.y + matrixData[8] * vec.z);
    }

    Vector3d Matrix3d::transformVectorByMatrix(const Vector3d &vec) const
    {
        return (*this) * vec;
    }

    void Matrix3d::show()
    {
        cout << "[" << matrixData[0] << ", " << matrixData[3] << ", " << matrixData[6] << ", " << endl;
        cout << " " << matrixData[1] << ", " << matrixData[4] << ", " << matrixData[7] << ", " << endl;
        cout << " " << matrixData[2] << ", " << matrixData[5] << ", " << matrixData[8] << "]" << endl;
    }
}