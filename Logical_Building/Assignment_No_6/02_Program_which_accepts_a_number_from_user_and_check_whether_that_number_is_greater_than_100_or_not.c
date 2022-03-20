#include<stdio.h>
#include<conio.h>

void check(int inum)
{
    if(inum > 100)
    {
        printf("\n%d is greater than 100", inum);
    }
    else if(inum < 100)
    {
        printf("\n%d is less than 100", inum);
    }
    else
    {
        printf("\n%d is equal to 100", inum);
    }
}

int main()
{
    int inum = 0;
    
    printf("\nEnter the number : ");
    scanf("%d",&inum);

    check(inum);

    getch();
    return 0;
}