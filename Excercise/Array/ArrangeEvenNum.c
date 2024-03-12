/**
 * Sử dụng buble sort để sắp xếp các phần tử chẵn theo chiều giảm dần
*/

#include <stdio.h>
#define MAX_LENGTH 200

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp; 
}


int inputIntArr(int arr[])
{
    int sizeArr = 0;
    do{
        printf("Please type the size of Array ");
        scanf("%d",&sizeArr);
    }while(sizeArr > MAX_LENGTH || sizeArr < 0);
    
    printf("Please type the value of member ");
    for(int i = 0; i < sizeArr; i++)
    {
        printf("\nArr[%d]: ",i);
        scanf("%d",arr+i);
    }

    return sizeArr;
}
// Kiểm tra phần tử chẵn hoặc lẻ
int checkEvenNumber(int n)
{
    if(n%2 == 0) return 1;
    return 0;
}

void ArrangEvenNumber(int arr[], int sizeArr)       
{
    for(int i = 0; i < sizeArr - 1 ; i++)
    {
        for(int j = i + 1; j < sizeArr; j++)
        {
            if(checkEvenNumber(arr[i]) && checkEvenNumber(arr[j]) && arr[i] > arr[j]) Swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    int arr[] = {1, 9, 2, 4, 6, 3, 5, 0, -5, 8};
    int sizeArr= sizeof(arr)/sizeof(int);
    // int sizeArr= inputIntArr(arr);
    ArrangEvenNumber(arr,sizeArr);
    // printf("\t%d",sizeArr);
    for(int i = 0; i < sizeArr; i++) printf("\t%d",arr[i]);
    return 0;
}

