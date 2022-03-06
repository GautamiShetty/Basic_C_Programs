#include<stdio.h>
#include<conio.h>

void nonFactor(int inum);

int main()
{
    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d", &inum);

    nonFactor(inum);

    printf("\n\nThanks or visiting.");

    getch();
    return 0;
}

void nonFactor(int inum)
{
    int i = 0;

    printf("\nNon Factors of %d :",inum);
    for(i = 2; i < inum; i++)
    {
        if(inum % i != 0)
        {
            printf(" %d",i);
        }
    }
}