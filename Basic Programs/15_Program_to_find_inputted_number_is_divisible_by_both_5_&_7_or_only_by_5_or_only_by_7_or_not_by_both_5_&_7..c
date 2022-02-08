#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    
    if ((num % 5 ==0) && (num % 7==0))
    {
        printf("%d is divisible by 5 and 7");
    }
    else if (num % 5 ==0 )
    {
        printf("%d is divisible by 5 ");
    }
    else if ( num % 7==0)
    {
        printf("%d is divisible by 7");
    }
    else 
    {
        printf("%d is neither divisible by 5 nor by 7",num);
    }
    
    getch();
return 0;
}

