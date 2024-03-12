/**
 * Review all sort after 3 days
*/

#include <stdio.h>

#define SIZE_ARR 255


void OutputArr(int arr[], int sizeArr)
{
    printf("\nOUTPUT ARR: ");
    for(int i = 0; i < sizeArr; i++)
    {
        printf("\t%d",arr[i]);
    }
}

void SwapValue (int* first, int* second)    // Swap using temp or XOR 
{
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int InterChangeSort (int arr[], int sizeArr)            // Interchange sort use compare directly ==> Good 
{
    for(int i = 0; i < sizeArr; i++)
    {
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(arr[j] < arr[i]) SwapValue(&arr[j] ,&arr[i]);
        }
    }
}

int BubleSort (int arr[], int sizeArr)          // Buble sort, go from the end of the arr 
{
    for(int i = 0; i < sizeArr - 1; i++)
    {
        for(int j = sizeArr - 1; j > i; j--)
        {
            if(arr[j] < arr[j-1]) SwapValue(&arr[j] ,&arr[j-1]);
        }
    }
}

int InsertionSort (int arr[], int sizeArr)          // InsertSort là mình sẽ thêm vào vị trí bằng cách chạy và tìm xem điểm nào thỏa mãn 
{
    int value, position;                 
    for(int i = 1; i < sizeArr; i++)
    {
        value = arr[i];
        position = i;
        while(position > 0 && value < arr[position-1])
        {
            arr[position] = arr[position-1];
            position--;
        }
        arr[position] = value;
    }

}

void SelectionSort(int arr[], int sizeArr)
{
    int min; 
    for(int i = 0; i < sizeArr; i++)
    {
        min = i;
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i) SwapValue(&arr[min] ,&arr[i]);

    }
}

int main()
{
    int arr[] = {1,4,56,1,2,3,4,232,122,334};
    int sizeArr = sizeof(arr)/sizeof(int);

    SelectionSort(arr, sizeArr);

    OutputArr(arr, sizeArr);
    return 0;


}