/**
 * Input: mảng số nguyên 
 * Output: giá trị chẵn nhỏ hơn 20
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


int main() 
{
    int arr[MAX_LENGTH];
    int sizeArr= inputIntArr(arr);

    printf("Phan tu chan be hon 20 trong mang la");
    for(int i = 0; i < sizeArr; i++)
    {
        if(checkEvenNumber(arr[i]) && (arr[i] < 20)) 
        {
 
        printf("\nArr[%d]: %d",i ,arr[i]);

        }
    }


    return 0;
}