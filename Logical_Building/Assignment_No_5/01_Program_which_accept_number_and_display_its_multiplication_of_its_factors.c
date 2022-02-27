#include<stdio.h>
#include<conio.h>

int MultFact(int ino)
{
    int i, multF = 1 ;
    for(i = 2 ; i = (ino / 2) ; i++)
    {
        if(ino % i == 0)
        {
            multF *= i;
        }
    }
    return ino;
}

int main()
{
    int inum = 0, ires = 0;

    printf("\nEnter the number : ");
    scanf("%d",&inum);
    
    ires = MultFact(inum);

    printf("\nMultiplication of factors : %d.",ires);
    printf("\nThanks for visiting.");
    
    getch();
    return 0;
}