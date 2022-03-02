#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct time_struct 
    {
        int hour, minute, second;
    };

void inputTime();
void outputTime(struct time_struct);

int main()
{
    inputTime();       

    getch();
    return 0;
}
void  inputTime()
{
    struct time_struct cTime;

    printf("\nEnter the hour : ");
    scanf("%d",&cTime.hour);

    printf("\nEnter the minute : ");
    scanf("%d",&cTime.minute);

    printf("\nEnter the second : ");
    scanf("%d",&cTime.second);

    printf("\nPress any key to proceed...");
    getch();
    system("cls");
    outputTime(cTime);
}
void outputTime(struct time_struct cTime)
{
    printf("\nEntered time : \n%d : %d : %d",cTime.hour,cTime.minute, cTime.second);
    printf("\nThanks for visiting.");
}