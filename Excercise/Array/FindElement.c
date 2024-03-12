/**
 * Tìm phần tử đầu tiên trong mảng nằm trong khoảng (x, y)
*/

#include <stdio.h>

void inputData (int *x, int *y)
{
    do 
    {
        printf("\nPlease type x : ");
        scanf("%d",x);
        printf("\nPlease type y : ");
        scanf("%d",y);
    }while(*x > *y);

}

void processData(int *x, int *y, int Arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr; i++)
    {
        if(Arr[i] < *y && Arr[i] > *x) 
        {
            printf("The first elemnt sastify the require is %d at position is %d", Arr[i], i+1);
            break;
        }
    }
}
int main()
{
    int Arr[] = {23,23,13,13,5,6,7,32421,2132,11,23};
    int sizeArr = sizeof(Arr)/ sizeof(int);
    int x, y;
    inputData(&x,&y);
    processData(&x,&y, Arr, sizeArr);
}