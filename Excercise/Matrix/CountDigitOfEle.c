/**
 *  Count Digit of a number  
 * 1. Write Input Matrix function 
 * 2. Write function to count the number of digits of a number 
 * 3. Write the fuction to check all the number of matrix
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE_COL 100
#define SIZE_ROW 100

void ImportMatrix(int Matrix[][SIZE_ROW], int sRow, int sCol);
int CountDigit(int number);
int SumDigitOfMatrix(int Matrix[][SIZE_ROW], int sRow, int sCol);
int CntDigits(int n);

int main()
{
    int Arr[SIZE_COL][SIZE_ROW];
    int Result; 
    ImportMatrix(Arr,2,2);
    Result = SumDigitOfMatrix(Arr,2,2);

    printf("\n The total Digit of matrix is %d", Result);

    return 0;
}





void ImportMatrix(int Matrix[][SIZE_ROW], int sRow, int sCol)
{
    printf("\nPlease type the value of Matrix\n");
    for(int i = 0; i < sCol; i++)
    {
        for(int j = 0; j < sRow; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&Matrix[i][j]);
        }
    }
}

int CountDigit(int number)
{
    int digit = 1;
    while((number / 10) != 0)
    {
        digit++;
        number /= 10;
    }
    return digit;
}

int SumDigitOfMatrix(int Matrix[][SIZE_ROW], int sRow, int sCol)
{
    int total = 0;
    for(int i = 0; i < sCol; i++)
    {
        for(int j = 0; j < sRow; j++)
        {
            total += CountDigit(Matrix[i][j]); 
        }
    }
    return total;
}


