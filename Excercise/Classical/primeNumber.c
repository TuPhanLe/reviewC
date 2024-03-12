/*
    prime number is the number which greater than 1 and cannot be divide by any whole number other than itself!!! 
    checking the input is prime or not!? 
*/

#include <stdio.h>

 
int isPrimeNumber(int n);

int main()
{
    int inputNum = 0;
    int isPrime = 0;
    scanf("%d",&inputNum);
    isPrime = isPrimeNumber(inputNum);
    printf("The number is %s", isPrime == 1? "prime" : "not prime");
}

int isPrimeNumber(int n)
{
    if(n  <= 2) return 0;
    else 
    {
        for (int i = 2; i < n; i++)
        {
            if(n%i == 0)
            {
                return 0;
            }
        }   
    }

    return 1;
}