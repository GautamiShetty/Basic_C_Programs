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
    int i = 0, iFsum = 0, iNFsum = 0, idiff = 0;

    for(i = 1; i <= inum; i++)
    {
        if(inum % i != 0)
        {
            iNFsum += i;
        }
        else
        {
            iFsum += i;
        }
    }
    idiff = iFsum - iNFsum;
    printf("\nDifference between summation of all factors and Non Factor numbers of %d : %d",inum, idiff);

}