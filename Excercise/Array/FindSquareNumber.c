/** Tìm số chính phương đầu tiên trong mảng số nguyên
*/

#include <stdio.h>

void FindFirstSqNum (int arr[], int sizeArr)
{
    for(int i = 0; i < sizeArr; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            if(arr[i] == j*j) 
            {
                printf("The first Square Number in Arr is %d at position is %d",arr[i], i + 1);
                return;
            }
        }
    }

}

int main()
{
    int arr[] = {1,23,4,5,1,3,81,9,17};
    int sizeArr = sizeof(arr)/sizeof(int);
    FindFirstSqNum(arr, sizeArr);

    return 0;
}