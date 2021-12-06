#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0, i = 0;

    printf("\nEnter a number: \n");
    scanf("%d",&num);

    printf("\nTable of %d is as follows: \n", num);
    for(i = 1; i <= 10 ; i++)
    {
        printf(" %2d * %2d = %3d\n", num, i, num*i);
    }
    
    getch();
    return 0;
}