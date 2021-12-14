#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, cnt = 0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d",&cnt);
    printf("Required T shaped pattern is as follows: \n");
    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(i == 1 || j == (cnt + 1)/ 2)
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