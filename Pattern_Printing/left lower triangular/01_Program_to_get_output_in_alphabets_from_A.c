// Your expected output will be
// A 
// B C 
// D E F
// G H I J 
// K L M N O 
// This output is for 5*5 matrix
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
                if(alp > 'Z') //For repeating alphabets from when your alp gets to A
                {
                    alp = 'A';
                }
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}