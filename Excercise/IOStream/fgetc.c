/**
 * Hàm fgetc() trong C được sử dụng để đọc từng ký tự một từ một file đã cho. Nó trả về EOF khi kết thúc file.
*/

#include <stdio.h>

void main() {
    FILE* fp;
    char c;
    fp = fopen("file.txt", "w");
    // fputc('H',fp);
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}