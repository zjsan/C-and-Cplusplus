//Sample Matrix Multiplication
//Coded Based on the Math 113 - Linear Algebra lesson
//Coded by: Zainal Jumaine Santos
//Date: 01 - 19 - 23

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;


   //defining rows and columns
    const int a_rows = 2;
    const int a_columns = 3;
    const int b_rows = 3;
    const int b_columns = 2;
    const int ab_rows = 2;
    const int ab_columns = 2;
    int ab_matrix[ab_rows][ab_columns];


int matrix_AB_function(int matrix[ab_rows][ab_columns])
{

    //initializing matrices
    int matrix_A[a_rows][a_columns] = 
    {
        {2,-3,-1},
        {5, 0, 1}
    };
    
    int matrix_B[b_rows][b_columns] = 
    {
        {5,-1},
        {0,-2},
        {1,2}
    };

    cout << "Matrix A: " << "\n";

    //traversing every entries in matrix A
    for(int i = 0; i < a_rows; i++)
    {
        for(int j = 0; j < a_columns;j++)
        {
            cout <<"Row[" << i + 1 << "]" << " " << "Column["  << j+1 << "]: " << matrix_A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";  
    cout << "Matrix B: " << "\n";

    //traversing all entries in matrix B
    for(int i = 0; i < b_rows; i++)
    {
        for (int j = 0; j < b_columns; j++)
        {
            /* code */
            cout <<"Row[" << i + 1 << "]" << " " << "Column["  << j+1 << "]: " << matrix_B[i][j] << " ";
        };
        cout << "\n";
    }

    cout << "\n";

    //checks if the columns in matrix A is equal to the rows of matrix B
    //main algorithm for the multiplication part
    if(a_columns == b_rows)
    {
        //proceed to the getting of the products of each corresponding entries of both matrices
        //outer loop is iterating thru every entries in matrix A rows
        //loop 2 is iterating thru the entire columns of matrix B 
        //loop3 corresponds to all entries in matrix A
        for(int i = 0; i < a_rows; i++)
        {
            for(int j = 0; j < b_columns; j++)
            {
                //filling up the empty matrix to avoid errors
                 matrix[i][j] = 0;

                for ( int k = 0; k < a_columns; k++)
                {
                   //multiplying each entries in the rows of matrix A to the corresponding entries of the columns in matrix B 
                   //adding them then assigning it to the matrix that consist 0s
                    matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
                } 
            }
        }
    }
    return 0;
}

void display_matrix(int matrix[a_rows][b_columns])
{
    //final output of the matrix should be equal to the rows of the first matrix and columns of the second matrix   
    if(a_rows == b_columns) 
    {
        for(int i = 0; i < a_rows; i++)
        {
            for(int j = 0; j < b_columns; j++)
            {
                cout <<"Row[" << i + 1 << "]" << " " << "Column["  << j+1 << "]: " << matrix[i][j] << "\n";
            }
        }
    }
}

int main()
{
    
    matrix_AB_function(ab_matrix);
    display_matrix(ab_matrix);
    return 0;
}