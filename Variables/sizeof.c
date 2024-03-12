/*sizeof là một toán tử dùng trả về kích cỡ của kiểu dữ liệu đó 

*/

#include <stdio.h>
#include <limits.h>         // Thư viện dùng để truy cập vào marco của int và char 

int main()
{
    // int x = 0;
    // char a = 'a';
    // unsigned char b = 'b';
    // unsigned int y = 2;

    // printf("Size of int: %d \n", sizeof(x));
    // printf("Size of char: %d \n", sizeof(a));
    // printf("Size of unsigned char: %d \n", sizeof(b));
    // printf("Size of unsigned int: %d \n", sizeof(y));

    char c;
    short s;
    int i;
    unsigned int ui;
    float f;
    double d;
    long long ll;

 
    // // sizeof
    // printf("Size of char is %d\n", sizeof c); // Ctrl C, Ctrl V
    // printf("Size of short is %d\n", sizeof s);
    // printf("Size of int is %d\n", sizeof i);
    // printf("Size of unsigned int is %d\n", sizeof ui);
    // printf("Size of float is %d\n", sizeof f);
    // printf("Size of double is %d\n", sizeof d);
    // printf("Size of long long is %d\n", sizeof ll);

   printf("char ranges from : %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int ranges from : %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int ranges from : 0 to %lli\n", UINT_MAX);


    return 0;
}