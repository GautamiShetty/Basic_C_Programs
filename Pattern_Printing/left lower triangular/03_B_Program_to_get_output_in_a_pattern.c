//Your expected output will be
// A 
// A B
// A B C
// A B C D
// A B C D E
//for 5*5 Matrix
#include<stdio.h>
#include<conio.h>
int main()
{   
    int i = 0, j = 0, cnt = 0;
    char alp = 'A';
    printf("\nEnter the row and column count: \n");
    scanf("%d",&cnt);

    printf("\nRequired pattern is as below => \n");
    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(i >= j )
            {
                printf(" %c ",alp);
                alp++; 
            }
        }
        printf("\n");
        alp = 'A';
    }

    getch();
    return 0;
}