#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    struct time_struct 
    {
        int hour, minute, second;
    };
    struct time_struct cTime;

    printf("\nEnter the hour : ");
    scanf("%d",&cTime.hour);

    printf("\nEnter the minute : ");
    scanf("%d",&cTime.minute);

    printf("\nEnter the second : ");
    scanf("%d",&cTime.second);

    printf("\nPress any key to proceed.");
    system("cls");
    printf("\nEntered time =>");
    printf("\n\n %d : %d : %d",cTime.hour, cTime.minute, cTime.second);
    printf("\n\nThanks for visiting.");
    getch();
    return 0;
}