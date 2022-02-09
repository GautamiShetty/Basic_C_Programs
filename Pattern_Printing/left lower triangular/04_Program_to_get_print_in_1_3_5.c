#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0,k = 1,cnt = 0;
    printf("Enter the row and column count: \n");
    scanf("%d",&cnt);
    for(i = 0; i < cnt; i++)
    {
        for(j = 0; j < cnt; j++)
        {
            printf(" * ");
            k=k+2;
        }
        printf(" \n ");
    }

    getch();
    return 0;
}
