#include<stdio.h>
#include<conio.h>

void check(int inum)
{
    if(inum % 5 == 0)
    {
        printf("\n%d is divisible by 5",inum);
    }
    else
    {
        printf("\n%d is not divisible by 5",inum);
    }

}

int main()
{
    int inum = 0;

    printf("\nEnter the number: ");
    scanf("%d",&inum);
    check(inum);
    getch();
    return 0;
}
