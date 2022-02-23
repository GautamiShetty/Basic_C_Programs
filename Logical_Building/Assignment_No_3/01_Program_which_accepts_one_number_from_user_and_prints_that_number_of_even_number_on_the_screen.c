#include<stdio.h>
#include<conio.h>

void printEven(int inum)
{
    int i = 0;
    if(inum < 0)
    {
        printf("\nNULL");
    }
    else
    {
        printf("\nRequired even numbers :");
        for(i = 1; i <= inum; i++)
            {
                printf(" %d", 2*i);
            }
    }

    
}

int main()
{
    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d",&inum);

    printEven (inum);

    printf(".\nThanks for visiting.");
    getch();
    return 0;
}