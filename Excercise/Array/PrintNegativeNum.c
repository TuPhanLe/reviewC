/**
 * In ra các phần tử âm trong mảng
*/

#include <stdio.h>
#define MAX_LENGTH 200

int main()
{
    float arr[MAX_LENGTH];
    int length;
    do{
        printf("Nhap vao so luong phan tu trong mang: ");
        scanf("%d",&length);

    }while(length >MAX_LENGTH || length < 0);

    for(int i = 0; i < length; i++)
    {
        printf("\n Phan tu [%d]: ",i);
        scanf("%f",&arr[i]);
    }
    printf("\n Cac phan tu am la");
    for(int i = 0; i < length; i++)
    {
        if(arr[i] < 0)
        printf("\n Phan tu [%d]: %f",i, arr[i]);
    }
    return 0;
}