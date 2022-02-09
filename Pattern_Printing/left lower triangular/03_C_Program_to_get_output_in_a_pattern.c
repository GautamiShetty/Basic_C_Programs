// Your expected output will be  
// A
// B B
// C C C
// D D D D
// E E E E E
// This is for 5*5 matrix
#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 0, j = 0, cnt = 0;
    char alp = 'A';

    printf("\nEnter the row and number count: \n");
    scanf("%d",&cnt);

    printf("Required pattern is as below =>\n");

    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++)
        {
            if(i >= j)
            {
                printf(" %c ",alp);
            }
        }
        printf("\n");
        alp++;
    }

}