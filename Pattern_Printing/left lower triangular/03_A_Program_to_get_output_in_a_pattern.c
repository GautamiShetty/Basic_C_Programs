//Your expected output will be
// A 
// F G 
// K L M 
// P Q R S 
// U V W X Y
//for 5*5 Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0, j = 0, cnt = 0;
    char alp = 'A';

    printf("\nEnter the row and column count: \n");
    scanf("%d",&cnt);

    printf("\nRequired pattern is below: \n");
    for(i = 1; i <= cnt; i++)
    {
        for(j = 1; j <= cnt; j++,alp++)
        {
            if(i >= j)
            {
                printf(" %.2c ",alp);
            }
            else
            {
                printf("   ");
            }
            if(alp > 'Z')
            {
                alp = 'A';
            }
            
        }
        
        printf("\n");
    } 

    getch();
    return 0;
}