#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0, i = 0, j = 0;
    printf("\nEnter number of R: ");// Its better to give odd number of row count and column count
    scanf("%d",&R);
    printf("\nEnter number of C: ");
    scanf("%d",&C);

    printf("\n Required pattern printing => \n\n");

    for(i = 1; i <= R; i++)
    {
        for(j = 1; j <= C; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}