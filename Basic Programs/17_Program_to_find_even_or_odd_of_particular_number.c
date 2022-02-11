#include<stdio.h>
#include<conio.h>
int main()
{
    int num1 = 0;

    printf("Enter number: \n");
    scanf("%d",&num1);
    if(num1 == 0)
    {
        printf("0 is unique number");
    }
    else
    {
        if(num1%2==0)
        {
            printf("%d is an even number",num1);
        }
        else
        {
            printf("%d is an odd number",num1);
        }
    }
    getch();
    return 0;
}