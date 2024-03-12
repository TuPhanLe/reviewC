
#include <stdio.h>

int main()
{
    int *p = NULL;          // con trỏ null được sử dụng khi tạo một con trỏ mà không có mục đích gán địa chỉ ngay lập tức
    int **p2 = NULL;            // Sử dụng con trỏ cấp 2 để truy cập vào địa chỉ của con trỏ cấp 1
    int ageOfStudent = 23; 
    p = &ageOfStudent;
    p2 = &p;
    printf("\t%d\n", ageOfStudent);
    printf("\t%x\n", p);    
    printf("\t%d\n", *p);           // Truy cập giá trị của biến ageOfStudent thông qua con trỏ cấp 1 
    printf("\t%x\n", p2);           // Giá trị của p2 là địa chỉ của p 
    printf("\t%d\n", **p2);           // Truy cập giá trị của biến ageOfStudent thông qua con trỏ cấp 2

}