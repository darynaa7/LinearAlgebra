#include "Matrix.h"
#include "MyForm.h"

#pragma once


ref class Slar
{
private:
	Matrix^ A;
	Matrix^ x;
	Matrix^ b;
    Matrix^ L;
    Matrix^ U;

public:
	Slar(Matrix^ matrixA, Matrix^ vectorB): A(matrixA), b(vectorB)
    {
        x = gcnew Matrix(b->GetRows(), 1);
    }

    void ForwardElimination()
    {
        StreamWriter^ writer = gcnew StreamWriter("forwardEl.txt");
        int n = A->GetRows();

        for (int k = 0; k < n - 1; k++)
        {
            int maxRow = k;
            double maxVal = Math::Abs(A->GetValue(k, k));
            for (int i = k + 1; i < n; i++)
            {
                if (Math::Abs(A->GetValue(i, k)) > maxVal)
                {
                    maxRow = i;
                    maxVal = Math::Abs(A->GetValue(i, k));
                }
            }
            if (maxVal == 0)
            {
                writer->WriteLine("System has infinite solutions or no solutions.");
                writer->Close();
                throw gcnew System::InvalidOperationException("System has infinite solutions or no solutions.");
                return;
            }

            A->SwapRows(k, maxRow);
            b->SwapRows(k, maxRow);

            
            for (int i = k + 1; i < n; i++)
            {
                double factor = A->GetValue(i, k) / A->GetValue(k, k);
                for (int j = k; j < n; j++)
                {
                    double newValue = A->GetValue(i, j) - factor * A->GetValue(k, j);
                    A->SetValue(i, j, newValue); 
                }
                double newBValue = b->GetValue(i, 0) - factor * b->GetValue(k, 0);
                b->SetValue(i, 0, newBValue);
            }
            writer->WriteLine("Step " + (k + 1) + ":");
            writer->WriteLine("Matrix A:");
            writer->WriteLine(A->ToString());
         
        }
        writer->Close();
    }

    void BackwardSubstitution()
    {
        int n = A->GetRows();

        for (int i = n - 1; i >= 0; i--)
        {
            double sum = 0.0;
            for (int j = i + 1; j < n; j++)
            {
                sum += A->GetValue(i, j) * x->GetValue(j, 0);
            }
            if (A->GetValue(i, i) == 0)
            {
                throw gcnew System::InvalidOperationException("System has infinite solutions or no solutions.");
                return;
            }

            double newBValue = (b->GetValue(i, 0) - sum) / A->GetValue(i, i);
            x->SetValue(i, 0, newBValue);
        }
    }

    void Solve()
    {
        ForwardElimination();
        BackwardSubstitution();
    }
    Matrix^ GetX()
    {
        return x;
    }
    Matrix^ GetA()
    {
        return A;
    }
    void LUdecomposition()
    {
        int n = A->GetRows();
        L = gcnew Matrix(n, n);
        U = gcnew Matrix(n, n);

        for (int i = 0; i < n; i++)
        {
            L->SetValue(i, i, 1.0);
            for (int j = 0; j < n; j++)
            {
                double sum = 0.0;
                if (i <= j)
                {
                    for (int k = 0; k < i; k++)
                    {
                        sum += L->GetValue(i, k) * U->GetValue(k, j);
                    }
                    U->SetValue(i, j, A->GetValue(i, j) - sum);
                }
                else
                {
                    for (int k = 0; k < j; k++)
                    {
                        sum += L->GetValue(i, k) * U->GetValue(k, j);
                    }
                    L->SetValue(i, j, (A->GetValue(i, j) - sum) / U->GetValue(j, j));
                }
            }
        }
    }

    Matrix^ GetL()
    {
        return L;
    }

    Matrix^ GetU()
    {
        return U;
    }

    double RelativeError(Matrix^ A, Matrix^ b, Matrix^ x)
    {
        int size = x->GetRows();
        array<double>^ Ax = gcnew array<double>(size);

        for (int i = 0; i < size; i++)
        {
            double sum = 0;
            for (int j = 0; j < size; j++)
            {
                sum += A->GetValue(i, j) * x->GetValue(j, 0);
            }
            Ax[i] = sum;
        }

        double diffNorm = 0;
        double bNorm = 0;
        for (int i = 0; i < size; i++)
        {
            diffNorm += Math::Pow(b->GetValue(i, 0) - Ax[i], 2);
            bNorm += Math::Pow(b->GetValue(i, 0), 2);
        }

        return Math::Sqrt(diffNorm) / Math::Sqrt(bNorm);
    }

    double CalculateResidualNorm(Matrix^ A, Matrix^ X, Matrix^ B) {
        double sum = 0;
        for (int i = 0; i < A->GetRows(); i++) {
            double temp = B->GetValue(i, 0);
            for (int j = 0; j < A->GetCols(); j++) {
                temp -= A->GetValue(i, j) * X->GetValue(j, 0);
            }
            sum += Math::Pow(temp, 2);
        }
        return Math::Sqrt(sum);
    }


    void SeidelMethod(int maxIterations, double epsilon)
    {
        int n = A->GetRows();
        Matrix^ xPrev = gcnew Matrix(n, 1); 
        Matrix^ xCurr = gcnew Matrix(n, 1); 

        int iterations = 0;
        double error = 0;
        StreamWriter^ sw = gcnew StreamWriter("seidelerror.txt");

        do
        {
            xPrev->CopyValues(xCurr); 
            for (int i = 0; i < n; ++i)
            {
                double sum1 = 0.0;
                double sum2 = 0.0;

                for (int j = 0; j < i; ++j)
                {
                    sum1 += A->GetValue(i, j) * xCurr->GetValue(j, 0);
                }

                for (int j = i + 1; j < n; ++j)
                {
                    sum2 += A->GetValue(i, j) * xPrev->GetValue(j, 0);
                }

                double newValue = (b->GetValue(i, 0) - sum1 - sum2) / A->GetValue(i, i);
                xCurr->SetValue(i, 0, newValue);
            }
            Matrix^ residual = b - (A * xCurr);

            error = RelativeError(A, b, xCurr);

            sw->WriteLine(error);

            iterations++;

            if (iterations > maxIterations)
            {
                throw gcnew System::InvalidOperationException("Можливе зациклення. Неможливо досягнути задану точність за обмежену кількість ітерацій");
                break;
            }
        } while (error > epsilon);            
        sw->Close();


        Matrix^ residual = b - (A * xCurr);
        double residualNorm = residual->Norm();

        
        
        StreamWriter^ swIterations = gcnew StreamWriter("seidel.txt");
        swIterations->WriteLine("Кількість ітерацій: " + iterations);
        swIterations->WriteLine("Розв'язок:");
        swIterations->WriteLine(xCurr->ToString());
        swIterations->Close();
        
        StreamWriter^ swResidual = gcnew StreamWriter("residualNorm.txt");
        swResidual->WriteLine(residualNorm);
        swResidual->Close();
           

      
    }

    static String^ ReadResultFromFile(String^ filename)
    {
        StreamReader^ reader = gcnew StreamReader(filename);

        try
        {
            String^ result = reader->ReadLine();
            return result;
        }
        catch (IOException^ e)
        {
            throw gcnew System::Exception("Не вдалося відкрити або прочитати файл " + filename);
        }
        finally
        {
            reader->Close();
        }
    }

    Matrix^ GaussianEliminationWithBandMatrixVector(Matrix^ A_vector, Matrix^ b_vector, int m)
    {
        int n = b_vector->GetRows();
 
        int expected_size = n * (m + 1);
        if (A_vector->GetRows() != expected_size)
        {
            throw gcnew System::ArgumentException("Initialization error: Size of A_vector is incorrect. Expected size: " + expected_size);
        }

        for (int k = 0; k < n; ++k)
        {
            int pivot_idx = matrix_to_vector_index(k, k, m);
            if (pivot_idx == -1)
            {
                continue;
            }
            double pivot = A_vector->GetValue(pivot_idx, 0);
            if (pivot == 0)
            {
                throw gcnew System::ArgumentException("Diagonal element is zero. Gaussian elimination cannot proceed.");
            }

            for (int i = k + 1; i < Math::Min(k + m + 1, n); ++i)
            {
                int factor_idx = matrix_to_vector_index(i, k, m);
                if (factor_idx == -1)
                {
                    continue;
                }
                double factor = A_vector->GetValue(factor_idx, 0) / pivot;
                for (int j = i; j < Math::Min(i + m + 1, n); ++j)
                {
                    int row_idx = matrix_to_vector_index(i, j, m);
                    int col_idx = matrix_to_vector_index(k, j, m);
                    if (row_idx != -1 && col_idx != -1)
                    {
                        A_vector->SetValue(row_idx, 0, A_vector->GetValue(row_idx, 0) - factor * A_vector->GetValue(col_idx, 0));
                    }
                }
                b_vector->SetValue(i, 0, b_vector->GetValue(i, 0) - factor * b_vector->GetValue(k, 0));
            }
        }

        array<double>^ x = gcnew array<double>(n);
        for (int i = n - 1; i >= 0; --i)
        {
            double sum_ax = 0;
            for (int j = i + 1; j < Math::Min(i + m + 1, n); ++j)
            {
                int idx = matrix_to_vector_index(i, j, m);
                if (idx != -1)
                {
                    sum_ax += A_vector->GetValue(idx, 0) * x[j];
                }
            }
            int pivot_idx = matrix_to_vector_index(i, i, m);
            if (pivot_idx == -1)
            {
                continue;
            }
            x[i] = (b_vector->GetValue(i, 0) - sum_ax) / A_vector->GetValue(pivot_idx, 0);
        }

        Matrix^ result = gcnew Matrix(n, 1);
        for (int i = 0; i < n; ++i)
        {
            result->SetValue(i, 0, x[i]);
        }
        StreamWriter^ swIterations = gcnew StreamWriter("vectormatrixresult.txt");
        swIterations->WriteLine("Розв'язок:");
        swIterations->WriteLine(result->ToString());
        swIterations->Close();
        return result;
    }

 


    Matrix^ FromSymmetricBandMatrix(Matrix^ matrix, int m) {
        int n = matrix->GetRows();

        int num_elements = n * (m + 1);
        array<double>^ vector_elements = gcnew array<double>(num_elements);
        int vector_index = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < std::min(i + m + 1, n); ++j) {
                vector_elements[vector_index++] = matrix->GetValue(i, j);
            }
            if (n - i < m + 1) {
                int num_missing_entries = m + 1 - (n - i);
                for (int k = 0; k < num_missing_entries; ++k) {
                    vector_elements[vector_index++] = 0;
                }
            }
        }

        StreamWriter^ sw = gcnew StreamWriter("matrixtovector.txt");
        sw->WriteLine(matrix->ToString());
        Matrix^ result = gcnew Matrix(num_elements, 1);
        for (int i = 0; i < num_elements; ++i) {
            result->SetValue(i, 0, vector_elements[i]);
        }
        sw->WriteLine(result->ToString());
        sw->Close();
        return result;
    }
    double CalculateError(int m) {
        int n = b->GetRows();

        Matrix^ Ax = MultiplyBandMatrixVector(A, x, n, m);

        Matrix^ e = gcnew Matrix(n, 1);
        for (int i = 0; i < n; i++) {
            e->SetValue(i, 0, Ax->GetValue(i, 0) - b->GetValue(i, 0));
        }

        double error_norm = 0;
        for (int i = 0; i < n; i++) {
            error_norm += Math::Pow(e->GetValue(i, 0), 2);
        }
        error_norm = Math::Sqrt(error_norm);

        return error_norm;
    }

    Matrix^ MultiplyBandMatrixVector(Matrix^ A_matrix, Matrix^ x_matrix, int n, int m) {
        Matrix^ result = gcnew Matrix(n, 1); // Результат - матриця-стовпець

        for (int i = 0; i < n; ++i) {
            double sum = 0;
            for (int j = std::max(0, i - m); j <= std::min(i + m, n - 1); ++j) {
                int idx = matrix_to_vector_index(i, j, m);
                sum += A_matrix->GetValue(i, j) * x_matrix->GetValue(j, 0);
            }
            result->SetValue(i, 0, sum);
        }

        return result;
    }

    double CalculateErrorSeidel(int m) {
        int n = b->GetRows();

        Matrix^ Ax = MultiplyBandMatrixVector(A, x, n, m);

        Matrix^ e = gcnew Matrix(n, 1);
        for (int i = 0; i < n; i++) {
            e->SetValue(i, 0, Ax->GetValue(i, 0) - b->GetValue(i, 0));
        }

        double error_norm = 0;
        for (int i = 0; i < n; i++) {
            error_norm += Math::Pow(e->GetValue(i, 0), 2);
        }
        error_norm = Math::Sqrt(error_norm);

        return error_norm;
    }

    Matrix^ MultiplyBandMatrixVectorSeidel(Matrix^ A_matrix, Matrix^ x_matrix, int n, int m) {
        Matrix^ result = gcnew Matrix(n, 1); // Результат - матриця-стовпець

        for (int i = 0; i < n; ++i) {
            double sum = 0;
            for (int j = std::max(0, i - m); j <= std::min(i + m, n - 1); ++j) {
                int idx = matrix_to_vector_index(i, j, m);
                sum += A_matrix->GetValue(i, j) * x_matrix->GetValue(j, 0);
            }
            result->SetValue(i, 0, sum);
        }

        return result;
    }



private:
    int matrix_to_vector_index(int i, int j, int m)
    {
        if (j < i)
        {
            std::swap(i, j);
        }
        if (j - i > m)
        {
            return -1; 
        }
        return i * (m + 1) + (j - i);
    }
};
  



