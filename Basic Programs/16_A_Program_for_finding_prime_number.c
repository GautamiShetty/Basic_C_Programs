#include<stdio.h>
#include<conio.h>
int main()
{
    int num = 0, i = 0, count = 0, temp = 0;

    printf("Enter any number: \n");
    scanf("%d",&num);
    for(i = 1; i <= num; ++i)
    {
        if(num % i == 0)
        {
            ++count;
        }
    }

    if(count == 2)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
        
    }
    
    getch();
    return 0;
}