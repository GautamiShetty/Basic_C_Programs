#include<stdio.h>
#include<conio.h>

void incomeTax(float famount)
{
    printf("\nTax Amount : ");

    if(famount <= 500000)
    {
        printf("0");
    }
    else if(famount > 500000 && famount <= 1000000)
    {
        printf("%.2f", (0.1 ) * famount);
    }
    else if(famount > 1000000 && famount <= 2000000)
    {
        printf("%.2f",(0.2 ) * famount);
    }
    else
    {
        printf("%.2f",(0.3 ) * famount);
    }
}

int main()
{
    float famount = 0.0;

    printf("\nEnter the amount : ");
    scanf("%f",&famount);
    
    incomeTax(famount);

    printf("\nThanks for visiting.");
    
    getch();
    return 0;
}
