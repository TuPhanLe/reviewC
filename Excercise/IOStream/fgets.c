
/**
 * Hàm fgets() trong C được sử dụng để đọc một dòng ký tự từ một file đã cho.
*/

#include <stdio.h>

void main() {
    FILE* fp;
    char buffer[255];
    fp = fopen("file.txt", "r");
    fgets(buffer,200,fp);
    printf("%s",buffer);
    fclose(fp); 
}