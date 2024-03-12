/**
 * Tìm phần tử đầu tiên trong mảng nguyên có chữ số đầu là lẻ
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
// Ham kiem tra chu so dau tien la chan return 1, le re turn 0 
int checkTheFirstPosInArray(int n) 
{
    int isEven = 0;
    int result = 0;
    if(n < 0) n *= -1;              // Convert to positive number before using this way!!! 
    while(n > 0)
    {
        if(n > 0 && n < 10) result = n; 
        n = n / 10;

    }
    if(result % 2 == 0) isEven = 1;
    return isEven;
}
// Print the first number which has the first character is odd!! 
void printTheOddNum(int arr[], int sizeArr) 
{
    for(int i = 0; i < sizeArr; i++)
    {
        if(!checkTheFirstPosInArray(arr[i]))
        {
            printf("The answer is %d",arr[i]);
            break;
        }
    }
}

int main()
{
    int arr[MAX_LENGTH];
    int sizeArr= inputIntArr(arr);

    printTheOddNum(arr, sizeArr);


    return 0;
}

