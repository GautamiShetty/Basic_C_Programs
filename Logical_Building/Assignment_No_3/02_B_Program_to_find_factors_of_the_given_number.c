#include<stdio.h>
#include<conio.h>

void factor(int ino)
{
    int i = 0;
    for(i = 1; i < ino/2 ; i++)
    {
        if(ino % i == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int inum = 0, i = 0;

    printf("\nEnter the number :");
    scanf("%d",&inum);

    printf("\nFactors of %d : ",inum);

    factor(inum);

    printf("\nThanks for visiting.");

    getch();
    return 0;
}