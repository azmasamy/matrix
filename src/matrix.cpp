#include "matrix.h"
#include <iostream>
using namespace std;

template<typename T>
Matrix<T>::Matrix(int rows, int cols)
{
    this.rows = rows;
    this.cols = cols;
}
template<typename T>
Matrix<T>::~Matrix()
{

}

template<typename T>
Matrix<T>::Matrix (const Matrix & rhs)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] = rhs.data[i][j];
        }
    }
}

template<typename T>
Matrix<T>& Matrix<T>::operator = (const Matrix & rhs)
{

}

template<typename T>
void Matrix<T>::operator += (T scaler)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] += scaler;
        }
    }
}

template<typename T>
Matrix<T> Matrix<T>::operator + (T scaler)
{

}

template<typename T>
void Matrix<T>::operator -= (T scaler)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] -= scaler;
        }
    }
}

template<typename T>
Matrix<T> Matrix<T>::operator - (T scaler)
{

}

template<typename T>
void Matrix<T>::operator *= (T scaler)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] *= scaler;
        }
    }
}

template<typename T>
Matrix<T> Matrix<T>::operator * (T scaler)
{

}

template<typename T>
void Matrix<T>::operator *= (const Matrix & rhs)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] *= rhs.data[i][j];
        }
    }
}

template<typename T>
Matrix<T> Matrix<T>::operator * (const Matrix & rhs)
{

}

template<typename T>
void Matrix<T>::operator += (const Matrix & rhs)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] += rhs.data[i][j];
        }
    }
}

template<typename T>
Matrix<T> Matrix<T>::operator + (const Matrix & rhs)
{

}


template<typename T>
Matrix<T>::getcols() const
{
    return cols;
}

template<typename T>
Matrix<T>::getrows() const
{
    return rows;
}

template<typename T>
void Matrix<T>::display()
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << data[i][j];
        }
        cout << endl;
    }
}

template<typename T>
void Matrix<T>::fillMatrix(T value)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            data[i][j] = value;
        }
    }
}


