#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;


 //defining rows and columns
    int const a_rows = 2;
    int const a_columns = 3;
    int const b_rows = 3;
    int const b_columns = 2;
    int const ab_rows = 2;
    int const ab_columns = 2;
    int ab_matrix[ab_rows][ab_columns];

int matrix_A_function(int rows, int columns)
{
    
    //initializing matrices
    int matrix_A[rows][columns] = 
    {
        {2,-3,-1},
        {5, 0, 1}
    };

    cout << "Matrix A: " << "\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns;j++)
        {
            cout <<"Row[" << i + 1 << "]" << " " << "Column["  << j+1 << "]: " << matrix_A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";  
    cout << "Matrix B: " << "\n";


    return 0;
}

int matrix_B_function(int rows, int columns)
{
     int matrix_B[rows][columns] = 
    {
        {5,-1},
        {0,-2},
        {1,2}
    };

    int matrix_AB[rows][columns];

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            /* code */
            cout <<"Row[" << i + 1 << "]" << " " << "Column["  << j+1 << "]: " << matrix_B[i][j] << " ";
        };
        cout << "\n";
    }

    return 0;
}

int matrix_AB_function(int matrix[ab_rows][ab_columns])
{
    //filling up values for the matrix
    for(int i = 0; i < ab_rows; i++)
    {
        for(int j = 0; j < ab_columns; j++)
        {
            matrix[i][j] = 0;
            cout << matrix[i][j];
        }
    }

    //checks if the columns in matrix A is equal to the rows of matrix B
    if(a_columns == b_rows)
    {
        //proceed to the getting of the products of each corresponding entries of both matrices
        
    }

    return 0;
}
int main()
{
    
    //matrix_A_function(a_rows,a_columns);
    //matrix_B_function(b_rows,b_columns);
    matrix_AB_function(ab_matrix);
    return 0;
}