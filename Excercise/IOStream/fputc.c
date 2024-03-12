/**
 * Hàm fputc() trong C được sử dụng để ghi một ký tự vào file.
*/

#include <stdio.h>

void main() {
    FILE* fp;
    fp = fopen("fi121233le.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file");
        return;
    }
    fputc('H',fp);
    fclose(fp);
}