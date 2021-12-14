#include<stdio.h>
#include<conio.h>
int main()
{
    int cnt = 0, i = 0, j = 0;
    printf("\nEnter number of rows and columns: \n");
    //Entered number will be considered for both row and column
    scanf("%d",&cnt);

    printf("\nRequired pattern is => \n\n");

    for(i = 1; i <=cnt; i++)
    {
        for(j=1; j <= cnt; j++)     
        {
            if(i ==1 || j == 1|| i == cnt || j == cnt )
                printf(" * ");
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