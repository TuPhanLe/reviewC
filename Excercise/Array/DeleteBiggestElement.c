/**
 * Xóa phần tử có giá trị lớn nhất trong mảng
*/

#include <stdio.h>

void DeleteTheBiggestElement(int arr[], int* sizeArr)
{
    int max = arr[0];
    int position; 
    for(int i = 0; i < *sizeArr; i++)
    {
        if(max < arr[i]) 
        {
            position = i;
            max = arr[i];
        }
    }

    for(int i = position; i < *sizeArr; i++)            // move the array forward 
    {
        arr[i] = arr[i+1];
    }

    (*sizeArr)--;           // Deduct the element

}

void PrintArr(int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr; i++)
    {
        printf("%d\t", arr[i]);
    }
}


int main()
{
    int arr[] = {1,23,4,5,1,3,81,9,17};
    int sizeArr = sizeof(arr)/sizeof(int);
    DeleteTheBiggestElement(arr, &sizeArr);
    PrintArr(arr,sizeArr);
    return 0;
}