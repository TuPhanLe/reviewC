/*
Tính giai thừa không sử dụng đệ quy 
*/

#include <stdio.h>


long factorial(int n);

int main()
{
    int inputNum = 0, answer = 0;
    scanf("%d", &inputNum);
    for(int i = 0; i <= inputNum; i++)
    {
        answer = factorial(i);
        printf("%d \t",answer);
    }
    return 0;
}

long factorial(int n)
{
    int tempNum = 1;
    for(int i = 1; i <= n; i++)
    {
        tempNum *= i;
    }
    return tempNum;
}