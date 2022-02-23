#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
void display(int inum)
{
    _Bool flag = 0;
    int i = 0;

    printf("\nEven factors : ");
    for(i = 1; i <=( inum/2 ) + 1; i++)
    {
        //printf("\n%d %d",i,inum);
        if((inum % i == 0) && (i % 2 == 0))
        {
            flag = 1;
            printf(" %d",i);
        }
    }
    if(flag == 0)
    {
        printf("0");
        printf("\nThere are no even factors of %d.",inum);
    }
    printf("\nThanks for visiting.");
}

int main()
{
    int ino = 0;
    printf("\nEnter the number: ");
    scanf("%d",&ino);
    display(ino);
    getch();
    return 0;
}
