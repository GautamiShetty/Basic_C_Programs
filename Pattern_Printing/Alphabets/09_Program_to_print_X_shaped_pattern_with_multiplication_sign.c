#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, cnt = 0;
    printf("\nEnter the row and column count: \n");
    scanf("%d",&cnt);

    printf("Required pattern is => \n");

    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(i == j || i + j == cnt + 1)
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