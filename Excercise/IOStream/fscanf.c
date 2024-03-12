/**
 * Hàm fscanf () được sử dụng để đọc tập hợp các ký tự từ file. Nó đọc một từ trong file và trả về EOF ở vị trí kết thúc file.
 * int fscanf(FILE *stream, const char *format [, argument, ...])
*/
#include <stdio.h>

void main() {  
    FILE* fp;
    char buff[255];
    fp = fopen("file.txt", "r");
    while(fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
}

