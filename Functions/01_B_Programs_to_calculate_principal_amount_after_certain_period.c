//////////////////////////////////////////////////////////////////////////////////
//////////This program calculates the value of principal amount after
//////////a certain periods of years and prints the results.
//////////////////////////////////////////////////////////////////////////////////

// Argument but no return value
void printline(char);
float value(float, float, int);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year;
    float prnpal, inrate;


    // Accept values from user
    printline('-');
    printf("\nEnter the Principal Amount : ");
    scanf("%f",&prnpal);
    printf("\nEnter the Interest Rate : ");
    scanf("%f",&inrate);
    printf("\nEnter the Time Period: ");
    scanf("%d",&year);
    printline('-');
    value(prnpal, inrate, year);
    system("cls");
    // Display values from user
    printline('-');
    printf("\n\nPrincipal Amount    = %5.2f\nInterest Rate       = %.1f\nTime period         = %d\n",prnpal,inrate,year);
    printf("Amount after %d year = %f\n\n", year,value(prnpal, inrate, year));
    printline('-');

    printf("\nThanks for visiting");
    return 0;
}
void printline(char c)
{
    int i = 0;
    for(i = 0; i <= 20; i++)
    {
        printf("%c ",&c);
    }
}
float value(float prn, float irate, int time)
{
    int i = 0;
    float sum = 0.0;
    for(i = 0; i <= time; i++)
    {
        sum += prn;
    }
    return (sum);
}
