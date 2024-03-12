
#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

void BubleSort(int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr - 1; i++)            // 0 -> 7
    {
        for(int j = sizeArr - 1; j > i; j--)            // 7 -> i
        {
            if(arr[j] > arr[j-1]) Swap(&arr[j] , &arr[j-1]);
        }
    }
}

int main()
{
    int arr[] = {1,23,1,55,2,64,41,215};
    int sizeArr = sizeof(arr)/sizeof(int);
    printf("%d\n",sizeArr);

    BubleSort(arr,sizeArr);
    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);

    return 0;
}