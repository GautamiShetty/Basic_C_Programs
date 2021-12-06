// Table in reverse order
#include <stdio.h>
#include <conio.h>
int main()
{
    int Cnt=0, No;

    printf("\n Enter a Number to print its table = ");
    scanf("%d",&No);

    printf("\n Table of %d is \n ", No);

    // while (Cnt <= 10)
    // {
    //     printf("\n %d * %2d = %d", No, Cnt, No * Cnt);
    //     Cnt++;
    // }
    for (Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %d * %2d = %d", No, Cnt, No * Cnt); 
    }

    getch();
    return 0;
}