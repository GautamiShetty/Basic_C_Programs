#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0, revNum = 0, temp = 0;
    printf("\nHii");

    printf("Enter the number: \n");
    scanf("%d",&num);
    
    num = temp;
    while(temp > 0)
    {
        revNum = (revNum*10) + (temp%10);
        temp /= 10;
    }    

    if(num == revNum)
    {
        printf("%d is palindrome number", num);
    }
    else
    {
        printf("%d is not palindrome number", num);
    }
    getch();
    return 0;
}