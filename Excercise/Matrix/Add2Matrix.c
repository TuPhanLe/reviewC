/**
 * Add 2 matrix 
*/

#include <stdio.h>
#include "stdlib.h"

#define ROW_MA 100
#define COL_MA 100

void ImportMatrix (int Matrix[][COL_MA], int sCol, int sRow, char *nameMatrix);
void PrintMatrix (int** Matrix, int sCol, int sRow, char *nameMatrix);
int** Add2Matrix (int MatrixA[][COL_MA], int sColA, int sRowA, int MatrixB[][COL_MA], int sColB, int sRowB);

int main()
{
    int A[ROW_MA][COL_MA];
    int B[ROW_MA][COL_MA];
    int** Result;
    ImportMatrix(A,2,2,"A");
    ImportMatrix(B,2,2,"B");


    Result = Add2Matrix(A,2,2,B,2,2);
    PrintMatrix(Result,2,2,"Result");
    return 0;
}


void ImportMatrix (int Matrix[][COL_MA], int sCol, int sRow, char *nameMatrix)
{
    for(int i = 0; i < sCol; i++)
    {
        for(int j = 0; j < sRow; j++)
        {
            printf("Matrix %s [%d][%d] = ",nameMatrix, i, j);
            scanf("%d",&Matrix[i][j]); 
        }
    }
}

void PrintMatrix (int** Matrix, int sCol, int sRow, char *nameMatrix)
{
    printf("\nMatrix %s \n", nameMatrix);
    for(int i = 0; i < sCol; i++)
    {
    printf("\n");
        for(int j = 0; j < sRow; j++)
        {
            printf("\t%d\t",Matrix[i][j]);
        }
    }
}

int** Add2Matrix (int MatrixA[][COL_MA], int sColA, int sRowA, int MatrixB[][COL_MA], int sColB, int sRowB)
{
    if((sColA != sColB) || (sRowA != sRowB)) return NULL;   // Return null if size of both array is different
    int** result = (int **)malloc(sRowA*sizeof(int));           // Allocate the memory for collomum 
    for(int i = 0; i < sColA; i++)
    {
        result[i] = (int *)malloc(sRowA*sizeof(int));
        for(int j = 0; j < sColA; j++)
        {
            result[i][j] = MatrixA[i][j] + MatrixB[i][j];
        }
    }
    return result;
}
