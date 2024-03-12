
#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

void SelectionSort(int arr[], int sizeArr)
{
    int min;
    for(int i = 0; i < sizeArr; i++)
    {
        min = i;
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(arr[j] < arr[min]) min = j;
        }
        if(min != i) Swap(&arr[min] , &arr[i]);
    }
}

int main()
{
    int arr[] = {1,23,1,55,2,64,41,215,11,23312,11,23,33};
    int sizeArr = sizeof(arr)/sizeof(int);
    printf("%d\n",sizeArr);

    SelectionSort(arr, sizeArr);

    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);

    return 0;
}