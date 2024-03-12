/**
 * Use struct to express time (H:M:S)
 * And calculate the time interval between 2 point
*/


#include <stdio.h>


typedef struct Time
{
    int hour;
    int minute;
    int second;
}time_t; 

int CalcTime (time_t* A, time_t* B, time_t* Result);
int SetTime(time_t *time, int hour, int minute, int second);
void DisplayTime(time_t time);
int ConvertToSecond(time_t time);
int ConvertToTime(time_t* time, int second);

int main()
{
    time_t timeA, timeB, timeC; 
    printf((SetTime(&timeA,1,3,4) == 1 ? "Set success\n" : "Set fail\n"));  
    printf((SetTime(&timeB,0,23,45) == 1 ? "Set success\n" : "Set fail\n"));  

    DisplayTime(timeA);
    DisplayTime(timeB);
    CalcTime(&timeA, &timeB, &timeC);


    printf("\n The time interval was calculated is ");
    DisplayTime(timeC);


    return 0;
}

/*Time C = |Time A - Time B|*/
int CalcTime (time_t* A, time_t* B, time_t* Result)          
{   
    int isCalSuccess = 0;
    int secondA, secondB, result;
    secondA = ConvertToSecond(*A);
    secondB = ConvertToSecond(*B);
    result = (secondA >= secondB) ? secondA - secondB : secondB -secondA;
    ConvertToTime(Result, result);

}

int SetTime(time_t *time, int hour, int minute, int second)
{
    int isSetTimeOk = 0;
    if((hour*minute*second >= 0) && (hour < 24) && (minute < 60) && (second < 60))
    {
        time->second = second;
        time->minute = minute;
        time->hour = hour;
        isSetTimeOk = 1;
    }
        
    return isSetTimeOk;
}

void DisplayTime(time_t time)
{
    printf("\nH:M:S => %2d:%2d:%2d",time.hour, time.minute, time.second);

}

int ConvertToSecond(time_t time)
{
    int result; 
    result = time.hour*60*60 + time.minute*60 + time.second;
    return result;
}

int ConvertToTime(time_t* time, int second)
{
    int isSucess = 0;
    time->hour = second / (60*60);
    time->minute = (second - time->hour*60*60)/60 ;
    time->second = second - time->hour*60*60 - time->minute*60;
    isSucess = 1;
    return isSucess;
}