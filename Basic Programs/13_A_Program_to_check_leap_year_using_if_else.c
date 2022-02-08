#include<stdio.h>
#include<conio.h>
int main()
{
    int year = 0;
    printf("Enter the year: \n");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 400 == 0 || year % 100 != 0)
    {
        printf("Leap year");
    }
    else 
    {
        printf("Not leap year");
    }
    getch();
    return 0;
}