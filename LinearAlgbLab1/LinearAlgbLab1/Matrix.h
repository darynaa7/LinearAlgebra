#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#pragma once

using namespace System;
using namespace System::IO;


ref class Matrix {
private:
    array<array<double>^>^ data;
    int rows;
    int cols;

public:
    Matrix() : rows(0), cols(0), data(nullptr) {};
    Matrix(int nrows, int ncols);
    Matrix(const Matrix% other);
    Matrix(String^ filename);
    void Randomize1(double min, double max);
    void Randomize2(double min, double max); 
    void WriteToFile(String^ filename);
    static Matrix^ operator+(Matrix^ a, Matrix^ b);
    static Matrix^ operator-(Matrix^ a, Matrix^ b);
    static Matrix^ operator*(Matrix^ a, Matrix^ b);
    virtual String^ ToString() override;
     String^ ToStringX() ;
    double MaximumAbsoluteNorm();
    int GetRows() { return rows; }
    int GetCols() { return cols; }
    double GetValue(int row, int col) { return data[row][col]; }
    void SwapRows(int row1, int row2) 
    {
        array<double>^ tempRow = data[row1];
        data[row1] = data[row2];
        data[row2] = tempRow;
    }
    void SetValue(int row, int col, double value)
    {
        data[row][col] = value;
    }
    double Norm()
    {
        double sum = 0.0;

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                sum += Math::Pow(data[i][j], 2);
            }
        }

        return Math::Sqrt(sum);
    }
    void CopyValues(Matrix^ other)
    {
        if (other->GetRows() != rows || other->GetCols() != cols)
        {
            // Якщо розміри матриць не співпадають, викидаємо виняток
            throw gcnew InvalidOperationException("Неможливо скопіювати значення: розміри матриць не співпадають.");
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                data[i][j] = other->GetValue(i, j);
            }
        }
    }

   /* Matrix^ operator-(Matrix^ a)
    {
        int rows = a->GetRows();
        int cols = a->GetCols();
        Matrix^ result = gcnew Matrix(rows, cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result->SetValue(i, j, -a->GetValue(i, j));
            }
        }

        return result;
    }*/
    int MatrixToVectorIndex(int i, int j, int m) {
        if (j < i) {
            int temp = i;
            i = j;
            j = temp;
        }
        return i * (m + 1) + (j - i);
    }

};