#include<stdio.h>
#include<conio.h>

void factRev(int inum)
{
    int i = 0;

    printf("\nFactors of %d in decresing order : ",inum);

    if(inum > 0)
    {
        for ( i = inum/2; i > 1 ; i--)
        {
            if(inum % i == 0)
            {
                printf(" %d",i);
            }
        }        
    }
    else if(inum == 0)
    {
        printf(" 0 ");
    }
    else{
        printf("Invalid input.");
    }
}

int main()
{
    int inum = 0;
    printf("\nEnter the number : ");
    scanf("%d",&inum);

    factRev(inum);
    getch();
    return 0;
}