#include <stdio.h>

int main()
{
    char buff[500], string[] = "This is string", character = 'c';
    int number = 23, length;
    float floatNumber = 2.32421f;

    length = sprintf(buff, " String: %s\n", string);
    length += sprintf(buff + length, " Character: %c\n", character);
    length += sprintf(buff + length, " Number: %d\n", number);
    length += sprintf(buff + length, " Float number: %f\n", floatNumber);

    printf("Character count is %d\n",length);
    printf("Output is : --- %s\n",buff);

 

    return 0;
}