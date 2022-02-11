#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0, revNum = 0, temp = 0;

    printf("Enter the number: \n");
    scanf("%d",&num);

    temp = num;
    while(temp > 0)
    {
        revNum = (revNum * 10) + (temp % 10);
        temp /= 10;
    }
    
    printf("The reverse of %d is %d\n",num , revNum);
    printf("Thanks for visiting\n");

    getch();
    return 0;
}