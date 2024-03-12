/**
 * Xóa tất cả các phần tử nhỏ hơn x
*/

#include <stdio.h>
#define MAX_LENGTH 200

int DeleteValueAtPosition (int arr[], int* sizeArr, int position)
{
    for(int i = 0; i < *sizeArr ; i++)
    {
        // printf("%d\t",arr[i]);
        if(i == position)
        {
            for( int j = i; j < *sizeArr; j++)
            {   
                arr[j] = arr[j+1];
            }
        --*sizeArr;
        }
    }
}

void DeleteValueWithCondition (int arr[], int* sizeArr, int condition)
{
    for(int i = *sizeArr -1; i >= 0; i--)
    {
        if(arr[i] < condition)
        {
            for(int j = i; j < *sizeArr -1; j++)
            {
                arr[j] = arr[j+1];
            }
            (*sizeArr)--;
        }
    }
}


int main()
{
    int inputData = 7;
    int arr[] = {1, 2, 3, 5, 1, 4, 6, 7};
    int sizeArr = sizeof(arr)/sizeof(int);
    int position = 0;
    // printf("%d\n",sizeArr);
    DeleteValueWithCondition(arr,&sizeArr,7);  

    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);
    // printf("\n%d",sizeArr);

    return 0;
}