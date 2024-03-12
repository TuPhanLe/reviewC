#include<stdio.h>
  
const int DEC_10 = 10;
int totalDigitsOfNumber(int n);
/**
 * Ham main
 */
int main() 
{
 int n;
    printf("Nhap so nguyen duong n = ");
    scanf("%d", &n);
    printf("Tong cac chu so cua %d la: %d", n, totalDigitsOfNumber(n));
}
 
/**
 * Tinh tong cac chu so cua mot so nguyen duong
 */
int totalDigitsOfNumber(int n) 
{
    int remainder = 0;
    while(n != 0)
    {
        remainder = n%DEC_10 + remainder;
        n = n / DEC_10;
    }
    return remainder;

}
