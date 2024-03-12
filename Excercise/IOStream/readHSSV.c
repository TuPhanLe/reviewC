/**
 * Đọc thông tin hssv từ file 
*/
#include <stdio.h>

void main() {  
    FILE *fp;
    char buff[255];
    int id;
    float mark;
    fp = fopen("fil123e.txt", "r");
    if(fp == NULL) 
    {
        printf("Error openning!");
        return;
    }
    printf("Gia tri doc duoc tu file la\n");
    printf("Name \tID\tMarks\n");
    while(fscanf(fp, "Name: %s\t\tID: %d\t\tMarks: %f\n", buff, &id, &mark) != EOF)
    {
        printf("%s\t%d\t%.2f\n",buff, id, mark);
    }

    fclose(fp);
}
