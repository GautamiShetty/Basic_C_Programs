#include<stdio.h>
#include<conio.h>

void calculateBill(float fAmount)
{
    //No discount applies to amounts less than 500
    if(fAmount <= 500)
    {        
        printf("\nDiscounted Amount : %.2f",fAmount);
    }
    //Displays amount with 10% discount on it
    else if(fAmount > 500 && fAmount <= 1500)
    {
        printf("\nYou are applicable for 10%% discount.");
        fAmount -= ((0.1 ) * fAmount);
        printf("\nDiscounted Amount : %.2f",fAmount);
    }
    //Displace amount with 20% discount on it
    else 
    {
        printf("\nYou are applicable for 20%% discount.");
        fAmount -= ((0.15)*fAmount);
        printf("\nDiscounted Amount : %.2f",fAmount);
    }
}

int main()
{
    float fbill = 0.0;
    printf("\nEnter the bill : ");
    scanf("%f",&fbill);

    calculateBill(fbill);

    printf("\nThanks for visiting.");
    
    getch();
    return 0;
}