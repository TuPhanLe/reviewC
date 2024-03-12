
#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

void InterChangeSort(int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr-1; i++)          // 0 -> 7
    {
        for(int j = i +1; j < sizeArr; j++) // 1 -> 8 
        {
            if(arr[i] > arr[j])
            {
                Swap(&arr[i],&arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {1,12,8,5,2,6,4,15};
    int sizeArr = sizeof(arr)/sizeof(int);
    printf("%d\n",sizeArr);

    InterChangeSort(arr,sizeArr);
    
    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);

    return 0;
}