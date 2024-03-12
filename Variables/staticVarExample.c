#include <stdio.h>          // <> được dùng khi include library từ ide hoặc compiler 
#include ""                 // "" được dùng khi include file do bản thân viết => thường include kiểu này khi đồng cấp 

int function(void);

void main()
{
    function();
    function();
    int temp = function();
    printf("%d", temp);
}


int function(void)
{
    static int var = 2;
    var *= 4; 
    return var; 
}