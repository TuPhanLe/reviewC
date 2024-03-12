/**
 * Tính tổng các phần tử ở vị trí chẵn trong mảng 1 chiều
*/

#include <stdio.h>
#define MAX_LENGTH 200

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

int sumAtEvenPos (int arr[], int sizeArr)
{
    int sum = 0; 
    for(int i = 0; i < sizeArr; i++)
    {
        if(checkEvenNumber(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[MAX_LENGTH];
    int sizeArr= inputIntArr(arr);
    int sum = 0;
    sum = sumAtEvenPos(arr,sizeArr);
    printf("\nTong gia tri cua cac so chan trong mang la %d", sum);

    return 0;
}

