/**
 * Hàm fputs() trong C được sử dụng để ghi một chuỗi ký tự vào file..
*/

#include <stdio.h>

void main() {
    FILE* fp;
    fp = fopen("file.txt", "w");

    fputs("Hello babyyyyyyyyyyyyy",fp);
    fclose(fp);
}