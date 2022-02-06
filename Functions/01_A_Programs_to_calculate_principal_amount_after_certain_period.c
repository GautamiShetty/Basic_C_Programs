//////////////////////////////////////////////////////////////////////////////////
//////////This program calculates the value of principal amount after
//////////a certain periods of years and prints the results.
//////////////////////////////////////////////////////////////////////////////////

// To make it presentable
void printline(void);

// To accept and display value from user
void value(void);
//No arguments no returns
#include<stdio.h>
#include<stdlib.h>

int main()
{
    printline();
    value();
    printline();
    return 0;
}

void printline(void)
{
    int i = 0;
    putchar('\n');
    for(i = 0; i <=30; i++)
    {
        printf(" %c",'_');
    }
}
void value(void)
{
    int year, i;
    float prnpal, inrate, sum;
    //Accept values from user
    printf("\n\nEnter the principal amount: ");
    scanf("%f",&prnpal);
    printf("\nEnter the interest rate:");
    scanf("%f",&inrate);
    printf("\nEnter the time period: ");
    scanf("%d",&year);
    system("cls");

    for(i = 0 ; i < year; i++)
    {
        sum += prnpal;
    }
    //Display values from user
    printline();
    printf("\n\nPrincipal Amount    = %5.2f\nInterest Rate       = %.1f\nTime period         = %d\n",prnpal,inrate,year);
    printf("Amount after %d year = %.2f", year, sum);
}
