#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt = 0, i = 0, j = 0;
    printf("\nEnter the number of row and column count: \n");
    scanf("%d",&cnt);

    printf("Required N shaped star pattern is =>\n");
    for(i = 1; i <= cnt ; i++)
    {
        for(j = 1; j<= cnt; j++)
        {
            if(j == 1 || j == cnt || i == j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}