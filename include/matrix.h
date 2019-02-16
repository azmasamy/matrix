#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix
{
public :
    Matrix (int rows, int cols);  //constructor
    Matrix (const Matrix & rhs); //Copy constructor.
    ~Matrix (); //Destructor
    Matrix<T>& operator = (const Matrix & rhs);
    //T& operator() (int row, int column);
    void operator += (T scalar);
    Matrix<T> operator + (T scalar);
    void operator -= (T scalar );
    Matrix<T> operator - (T scalar);
    void operator *= (T scalar );
    Matrix<T> operator * (T scalar);
    void operator *= (const Matrix<T>& rhs);
    Matrix<T> operator * (const Matrix<T> & rhs);
    void operator += (const Matrix<T> & rhs);
    Matrix<T> operator + (const Matrix<T> & rhs);
    int getrows() const ;
    int getcols() const;
    void display();
    void fillMatrix(T value);
private:
    T data;
    int rows;
    int cols;
};

#endif // MATRIX_H
