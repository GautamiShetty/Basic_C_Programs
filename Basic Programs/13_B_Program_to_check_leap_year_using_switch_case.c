//This program is to check leap year
#include<stdio.h>
#include<conio.h>
int main()
{
    int year, remainder;
    printf("Enter the Year : \n");
    scanf("%d",&year);

    remainder = (year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0));
    // In AND operator when condition is true it gives 1 
    // and when false it gives 0
    // so when your both condition comes true it gives you 1
    // but if either one condition is false your result will be 0.
    switch (remainder)
    {
    case 1: //Thats why here its 1 (not its remainder)
        printf("leap year");
        break;
    case 0:
        printf("Not leap year");
        break;
    default:
        printf("Invalid!!!");
        break;
    }
    
    getch();
    return 0;
}