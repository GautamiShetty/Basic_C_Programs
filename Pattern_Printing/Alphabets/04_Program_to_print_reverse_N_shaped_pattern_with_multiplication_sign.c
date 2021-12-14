#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt = 0, i = 0, j = 0;
    printf("Enter the row and column counts: \n");
    scanf("%d",&cnt);

    printf("Required N shaped pattern is as below =>\n");

    for(i = 1; i <= cnt ; i++)
    {
        for(j = 1; j<= cnt; j++)
        {
            if(j == 1 || j == cnt || i + j == cnt + 1)
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