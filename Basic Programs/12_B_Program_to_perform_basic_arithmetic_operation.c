#include <stdio.h>
#include <conio.h>
int main()
{
    int num1 = 0, num2 = 0;
    char oprtr = '0'; 
    
    printf("\nEnter two number: ");
    scanf("%d%d",&num1,&num2);
    
    printf("\nChoose the operator(+,-,*,/,%%): ");
    scanf("%c%c",&oprtr,&oprtr);

    switch(oprtr)
    {
    case '+':
        printf("%d + %d = %d",num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d",num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d",num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d",num1, num2, num1 / num2);
        break;
    case '%':
        printf("%d  %% %d = %d",num1, num2, num1 % num2);
        break;
    default:
        printf("\nInvalid operator!");
        break;
    }

    getch();
    return 0;
}
