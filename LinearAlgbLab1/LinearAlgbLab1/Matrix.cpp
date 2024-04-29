#include "Matrix.h"
#include <cassert>


Matrix::Matrix(int nrows, int ncols) : rows(nrows), cols(ncols) 
{
    data = gcnew array<array<double>^>(nrows);
    for (int i = 0; i < nrows; i++)
    {
        data[i] = gcnew array<double>(ncols);
        for (int j = 0; j < ncols; j++)
        {
            data[i][j] = 0.0;
        }
    }
}

Matrix::Matrix(const Matrix% other)
{
    rows = other.rows;
    cols = other.cols;
    data = gcnew array<array<double>^>(rows);
    for (int i = 0; i < rows; i++)
    {
        data[i] = gcnew array<double>(cols);
        for (int j = 0; j < cols; j++)
        {
            data[i][j] = other.data[i][j];
        }
    }
}

Matrix::Matrix(String^ filename) 
{
    StreamReader^ sr = gcnew StreamReader(filename);
    String^ line = sr->ReadLine();
    array<String^>^ parts = line->Split(' ');
    rows = Convert::ToInt32(parts[0]);
    cols = Convert::ToInt32(parts[1]);
    data = gcnew array<array<double>^>(rows);
    for (int i = 0; i < rows; i++) 
    {
        line = sr->ReadLine();
        parts = line->Split(' ');
        data[i] = gcnew array<double>(cols);
        for (int j = 0; j < cols; j++) 
        {
            data[i][j] = Convert::ToDouble(parts[j]);
        }
    }
    sr->Close();
}

void Matrix::Randomize1(double min, double max)
{
    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double randomValue = min + (max - min) * rand() / (RAND_MAX + 1.0);
            double roundedValue = round(randomValue * 10) / 10; 
            data[i][j] = roundedValue;
        }
    }
}

void Matrix::Randomize2(double min, double max)
{
    System::Random^ rnd = gcnew System::Random();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double randomValue = min + (max - min) * rnd->NextDouble();
            double roundedValue = Math::Round(randomValue, 1); 
            data[i][j] = roundedValue;
        }
    }
}

void Matrix::WriteToFile(String^ filename) 
{
    StreamWriter^ sw = gcnew StreamWriter(filename);
    sw->WriteLine(rows + " " + cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sw->Write(data[i][j] + " ");
        }
        sw->WriteLine();
    }
    sw->Close();
}

 Matrix^ Matrix::operator+(Matrix^ a, Matrix^ b) 
 {
    if (a->rows != b->rows || a->cols != b->cols) 
    {
        throw gcnew System::Exception("Matrix dimensions mismatch for addition");
    }
    Matrix^ result = gcnew Matrix(a->rows, a->cols);
    for (int i = 0; i < a->rows; i++) 
    {
        for (int j = 0; j < a->cols; j++) 
        {
            result->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
    return result;
}

 Matrix^ Matrix::operator-(Matrix^ a, Matrix^ b)
 {
     if (a->rows != b->rows || a->cols != b->cols)
     {
         throw gcnew System::Exception("Matrix dimensions mismatch for subtraction");
     }
     Matrix^ result = gcnew Matrix(a->rows, a->cols);
     for (int i = 0; i < a->rows; i++)
     {
         for (int j = 0; j < a->cols; j++)
         {
             result->data[i][j] = a->data[i][j] - b->data[i][j];
         }
     }
     return result;
 }

Matrix^ Matrix::operator*(Matrix^ a, Matrix^ b)
 {
     if (a->cols != b->rows) {
         throw gcnew System::Exception("Matrix dimensions mismatch for multltiplication");
     }
     Matrix^ result = gcnew Matrix(a->rows, b->cols);
     for (int i = 0; i < a->rows; i++) {
         for (int j = 0; j < b->cols; j++) {
             double sum = 0.0;
             for (int k = 0; k < a->cols; k++) {
                 sum += a->data[i][k] * b->data[k][j];
             }
             result->data[i][j] = sum;
         }
     }
     return result;
 }

String^ Matrix::ToString()
{
    String^ result = "";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result += data[i][j] + " ";
        }
        result += "\n";
    }
    return result;
}

String^ Matrix::ToStringX()
{
    String^ result = "";
    for (int i = 0; i < rows; i++)
    {
        result += "\n x[" + (i + 1) + "] = " + data[i][0].ToString("F10") + " \n ";
      
    }
    return result;
}




 double Matrix::MaximumAbsoluteNorm()
 {
     double maxNorm = 0.0;
     for (int i = 0; i < rows; i++)
     {
         for (int j = 0; j < cols; j++) 
         {
             double absValue = Math::Abs(data[i][j]);
             if (absValue > maxNorm) 
             {
                 maxNorm = absValue;
             }
         }
     }
     return maxNorm;
 }
