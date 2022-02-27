#include<stdio.h>
#include<conio.h>

void schoolFees( int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("\nFirst standard fees : 8900/-");
            break;
        
        case 2:
            printf("\nSecond standard fees : 12900/-");
            break;

        case 3:
            printf("\nThird standard fees : 21000/-");
            break;

        case 4:
            printf("\nFourth standard fees : 23450/-");
            break;

        default:
            printf("\nInvalid Input.");
            break;

    }
}

int main()
{
    int istd = 0;
    printf("\n Enter the Standard : ");
    scanf("%d", &istd);

    schoolFees(istd);

    printf("\nThanks for visiting.");
    
    getch();
    return 0;
}