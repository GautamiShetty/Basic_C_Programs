#include<stdio.h>
#include<conio.h>
void touristBill (float fkm)
{
    if(fkm <= 100)
    {
        printf("\nRent amount : %.2f",25*fkm);
    }
    else{
        printf("\nRent amount : %.2f",15*fkm);
    }
}
int main()
{
    float fkm = 0;

    printf("\nEnter the number of kilameters you travelled : ");
    scanf("\n%f",&fkm);

    touristBill(fkm);

    printf("\nThanks for visiting.");
    return 0;
}