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
    Matrix(String^ filename);
    Matrix(int nrows, int ncols) : rows(nrows), cols(ncols) {
       
            data = gcnew array<array<double>^>(nrows);
            for (int i = 0; i < nrows; ++i)
            {
                data[i] = gcnew array<double>(ncols);
                for (int j = 0; j < ncols; ++j)
                {
                    data[i][j] = 0.0;
                }
            }
        
    }
    void Randomize1(double min, double max);
    void Randomize2(double min, double max); 
    void WriteToFile(String^ filename);
    Matrix(const Matrix% other);
    static Matrix^ operator+(Matrix^ a, Matrix^ b);
    static Matrix^ operator-(Matrix^ a, Matrix^ b);
    static Matrix^ operator*(Matrix^ a, Matrix^ b);
    virtual String^ ToString() override {
        String^ result = "";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result += data[i][j] + " ";
            }
            result += "\n";
        }
        return result;
    }
    double MaximumAbsoluteNorm();
};