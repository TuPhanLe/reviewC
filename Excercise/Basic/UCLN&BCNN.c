/**
 * Tim Ước số chung lớn nhất và bội sớ chung lớn nhất 
 * Sử dụng giải thuật Ueclid
*/

#include <stdio.h>

int USCLN(int a, int b)
{
    if(b == 0 ) return a;
    return USCLN(b, a % b);
}

int BSCNN (int a, int b)
{
    return (a*b)/USCLN(a,b);
}
int main()
{
    printf("Test %d ", USCLN(3,4));
    printf("Test %d ", BSCNN(3,4));


    return 0;
}
