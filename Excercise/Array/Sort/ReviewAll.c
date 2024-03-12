#include <stdio.h>

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}

void InterChangeSort(int arr[], int sizeArr)            // Nghịch thế i < j
{
    for(int i = 0; i < sizeArr -1 ; i++)
    {
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(arr[j] < arr[i]) Swap(&arr[j], &arr[i]);
        }
    }
}

void BubleSort(int arr[], int sizeArr)                      // Chạy từ cuối dãy chạy lên 
{
    for(int i = 0; i < sizeArr; i++)                    // 0 -> 7 
    {
        for(int j = sizeArr-1; j > i; j--)              // 7 -> i 
        {
            if(arr[j] < arr[j-1]) Swap(&arr[j] , &arr[j-1]);
        }
    }
}

void InsertSort(int arr[], int sizeArr)                     // Dò từ vị trí để thêm vào
{
    int value = 0, position = 0;
    for(int i = 1; i < sizeArr; i++)
    {
        value = arr[i];
        position = i;
        while(position > 0 && value < arr[position - 1])
        {
            arr[position] = arr[position - 1 ];
            position--;
        }
        arr[position] = value;
    }
}

void SelectSort(int arr[], int sizeArr)                 // Chọn ra giá trị bé nhất trong các mảng, sắp xếp theo kiểu tự nhiên nhất có thể 
{
    int min = 0;
    for(int i = 0; i < sizeArr; i++)
    {
        min = i;
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(arr[min] > arr[j]) min = j;
        }
        if(min != i) Swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int arr[] = {1,23,1,55,2,64,41,215,11,23312,11,23,33};
    int sizeArr = sizeof(arr)/sizeof(int);
    printf("%d\n",sizeArr);

    SelectSort(arr, sizeArr);

    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);

    return 0;
}