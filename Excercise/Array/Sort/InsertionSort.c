
#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

void InsertionSort(int arr[], int sizeArr)
{
    int value, position;
    for(int i = 1; i < sizeArr; i++)
    {
        value = arr[i];
        position = i;
        while( position > 0 && value < arr[position-1]) 
        {
            arr[position] = arr[position - 1];
            position--;
        } 
        arr[position] = value;
    }
}

int main()
{
    int arr[] = {1,23,1,55,2,64,41,215};
    int sizeArr = sizeof(arr)/sizeof(int);
    printf("%d\n",sizeArr);

    InsertionSort(arr,sizeArr);
    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);

    return 0;
}