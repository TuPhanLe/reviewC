#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BEGIN_OF_RANDOM 10
#define END_OF_RANDOM 40
int random(int minN, int maxN){
	return minN + rand() % (maxN + 1 - minN);
}
int checkSeperately(int arr[][3], int sizeArr, int position)
{
    int isSeperate = 0;     // ko giao 
    for(int i = 0; i < sizeArr; i++)
    {
        if(i != position && !(arr[position][0] >= arr[i][1] || arr[position][1] <= arr[i][0]))
        {
            return 1;       // co giao 
        }
    }
    return isSeperate;
}

int main()
{
    srand((int)time(0));                        // Sử dụng srand với seed là đối số ngẫu nhiên sẽ giúp cho rand có kq khác nhau sau mỗi lần chạy lại 
    int number = random(BEGIN_OF_RANDOM,END_OF_RANDOM);                 // Sinh so ngau nhien tu a -> b (10 -> 1000)
    int negativeElement = 0;
    float negativePercent = 0;
    int arr[999][3];
    int a[999];
    int position = 0;
    int max = 0;
    while(negativePercent < 0.3)
    {
    for(int i = 0; i < number; i++)
        {
            arr[i][0] = random(-1000,1000);
            if(arr[i][0] < 0) negativeElement++;
            
            do
            {
            arr[i][1] = random(-1000,1000);
            }while(arr[i][1] <= arr[i][0]);
            arr[i][2] = arr[i][1] - arr[i][0] -1;
        }
        negativePercent = (float)negativeElement / number;
    }
    printf("%d\t%d\t%f\n",negativeElement, number, negativePercent);

    for(int i=0; i<number; i++)
    {
        // Quét từng cột
        printf("(%2d:%2d)", arr[i][0], arr[i][1]);
        // In dấu xuống dòng
        printf("\n");
    }
        printf("Ket thuc cau 1---------------------------\n");
    for(int i = 0; i < number; i++)
    {
        if(checkSeperately(arr,number,i) == 0)
        {
            printf("\n%d\n",i);
            printf("(%d:%d)\t%d", arr[i][0], arr[i][1], arr[i][2]);
            
        }
    }
        
    return 0;
}

