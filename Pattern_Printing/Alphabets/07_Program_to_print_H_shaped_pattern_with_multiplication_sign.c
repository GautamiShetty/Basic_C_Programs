// Program to print H shaped pattern with multiplication sign
#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt = 0, i = 0, j = 0;
    printf("\nEnter the row and coulumn count: \n");
    scanf("%d",&cnt)

    printf("\nRequired pattern is as below =>");
    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(j == 1 || j == cnt || i == (cnt + 1)/ 2)
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