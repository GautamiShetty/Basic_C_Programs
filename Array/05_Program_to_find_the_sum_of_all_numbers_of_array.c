#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n1 = 0, i = 0,num[15] = {},sum = 0;
    printf("\nEnter the number of numbers which are going to be added:");
    scanf("%d",&n1);
    system("cls");
    printf("\nEnter the numbers:");
    for(i = 0; i < n1; i++)
    {
        printf("\nNumber %d:",(i + 1));
        scanf("%d",&num[i]);
        sum += num[i];
    }
    system("cls");
    printf("\nAddition : %d",sum);

    getch();
    return 0;
}