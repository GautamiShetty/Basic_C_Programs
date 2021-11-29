#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 0, b = 0;
    printf("\n\tEnter 1st number = ");
    scanf("%d",&a);
    printf("\n\tEnter 2nd number = ");
    scanf("%d",&b);
    printf("\nNow your first number is %d and second number is %d\n", a, b);
    getche();
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nAfter swapping your first number will be %d and second number will be %d", a, b);

    getch();
    return 0;
}