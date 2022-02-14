#include<stdio.h>
#include<conio.h>

int main()
{
    int inum1 = 0, inum2 = 0;
    printf("Enter two numbers : ");
    scanf("%d%d",&inum1,&inum2);

    while(inum1>0)
    {
        ++inum2;
        --inum1;
    }
    printf("\nAddition of above numbers is %d",inum2);
    getch();
    return 0;
}