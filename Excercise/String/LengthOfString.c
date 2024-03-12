/**
 * Length of string!??? 
*/
#include <stdio.h>
#include "conio.h"

int LengthOfString (char * string);

int main()
{
    char* string = "1234567890";
    int length;
    
    length = LengthOfString(string);

    printf("Length of string is %d", length);
    return 0;
}

int LengthOfString (char * string)
{
    int len = 0;
    while(*string != NULL)
    {
        len++;
        string++;
    }
    return len;
}