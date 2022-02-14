#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0;
    printf("\nEnter the number between 1 and 12 to get the month:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("\nIts January");
        break;
        case 2:
        printf("\nIts February");
        break;
        case 3:
        printf("\nIts March");
        break;
        case 4:
        printf("\nIts April");
        break;
        case 5:
        printf("\nIts May");
        break;
        case 6:
        printf("\nIts June");
        break;
        case 7:
        printf("\nIts July");
        break;
        case 8:
        printf("\nIts August");
        break;
        case 9:
        printf("\nIts September");
        break;
        case 10:
        printf("\nIts October");
        break;
        case 11:
        printf("\nIts November");
        break;
        case 12:
        printf("\nIts December");
        break;
        default:
        printf("Invalid number");
        break;
    }
    printf("\nThanks for visiting");
    getch();
    return 0;
}