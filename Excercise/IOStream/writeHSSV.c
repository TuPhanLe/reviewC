/**
 * Lưu trữ thông tin nhân viên vào file 
*/
#include <stdio.h>

void main() {  
    FILE *fp;
    char name[255];
    int id;
    int salary;
    fp = fopen("InformationOfMember.txt", "a");
    if(fp == NULL) 
    {
        printf("Error openning!");
        return;
    }
    printf("Xin moi nhap thong tin nhan vien\n");
    printf("\nTen Nhan vien: ");
    scanf("%s",name);
    fprintf(fp,"\nTen nhan vien %s",name);
    printf("\nID cua nhan vien: ");
    scanf("%d",&id);   
    fprintf(fp,"\nID nhan vien %d",id);
    printf("\n Muc luong cua nhanh vien: ");
    scanf("%d",&salary);
    fprintf(fp,"\nLuong cua nhan vien %d",salary);
    fclose(fp);
}
