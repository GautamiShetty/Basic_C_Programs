#include<stdio.h>
#include<conio.h>
int main()
{
    int ino1 = 0, ino2 = 0, temp = 0;

    printf("\nBefore swapping =>");
    printf("\nEnter first number : ");
    scanf("%d",&ino1);
    printf("\nEnter second number : ");
    scanf("%d",&ino2);

    temp = ino1;
    ino1 = ino2;
    ino2 = temp;
    
    printf("\nAfter swapping =>");
    printf("\nEnter first number : %d",ino1);
    printf("\nEnter second number : %d",ino2);

    printf("\nThanks for visiting");
    getch();
    return 0;
}
