/**
 * giai phuong trinh bac 2: ax2 + bx + c = 0
 * 
 * @param a: he so bac 2
 * @param b: he so bac 1
 * @param c: so hang tu do
 */

#include <stdio.h>
#include <math.h>

void solveFunction (float a, float b, float c)
{
    float delta = 0; 
    float n1, n2;
    if( a == 0) printf("This is not quadractic!!!");
    else 
    {
        delta = b*b - 4 * a * c;
        if(delta == 0)
        {
            n1 = n2 = b*b / (2 * a *c);
            printf("This quadratice has 1 solution is %f", n1);
        }
        else if (delta < 0)  printf("This quadratice has no solution");
        else    
        {
            n1 = (-b-sqrt(delta))/2*a;
            n2 = (-b+sqrt(delta))/2*a;
            printf("This quadratice has 2 solution is %f and %f", n1, n2);
        }

    }
}

int main()
{
    solveFunction(1,2,1);

    return 0;
}