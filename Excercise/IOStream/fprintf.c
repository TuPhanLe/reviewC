/**
 * Hàm fprintf() trong C được sử dụng để ghi các ký tự vào file. Nó gửi dữ liệu được định dạng tới một stream.
 * int fprintf(FILE *stream, const char *format [, argument, ...])
*/

#include <stdio.h>

void main() {
    FILE* fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "Tinh yeu khong co loi\n");
    fclose(fp);
}