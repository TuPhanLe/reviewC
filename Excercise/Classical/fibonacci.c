/**
 * Tinh so Fibonacci thu n
 * 
 * @param n: chi so cua so Fibonacci tinh tu 0 
 *           vd: F0 = 0, F1 = 1, F2 = 1, F3 = 2
 * @return So Fibonacci thu n
 */

#include <stdio.h>

int fibonacci_myself (int n)               // Tự viết  
{
    int past = 0, now = 1;
    int ans = 0;  
    if( n == 0) return past;
    if(n == 1) return now;
    for(int i = 2; i <= n; i++)
    {
        ans = past + now; 
        past = now;
        now = ans; 
    }
    return ans;
}

int fibonacci_ref(int n)
{
    int f0 = 0;
    int f1 = 1;
    int f2 = 1;
    if(n < 0) return -1;
    else if(n == 0 || n == 1) return n;
    else 
    {
        for(int i = 2; i <= n; i++ )
        {
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }

        return f2;
    }
}

int main()
{   
    // int input;
    // scanf("%d",&input);
    // int ans = fibonacci_myself(input);
    // int ans = fibonacci_ref(input);

    for(int i = 0; i < 11; i++) 
    {
        printf("%d \t ", fibonacci_myself(i));
    }

    return 0;
}