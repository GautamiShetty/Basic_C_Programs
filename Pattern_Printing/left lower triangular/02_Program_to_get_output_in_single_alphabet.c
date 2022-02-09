// Your expected output will be (here my selected output will be S )
// S 
// S S 
// S S S 
// S S S S 
// S S S S S 
// This one is for 5*5 matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, cnt = 0;
    char alp = 'A';

    printf("\nEnter the row and column count: \n");
    scanf("%d",&cnt);

    printf("\nEnter your alphabet: \n");
    alp = getche();
    getch();
    printf("\nRequired pattern is below: \n");
    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(i >= j)
            {
                printf(" %.2c ",alp);
            }

        }
        
        printf("\n");
    } 

    getch();
    return 0;
}