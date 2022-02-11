#include<stdio.h>

float Divide(float,float);

int main()
{
    float fnum1 = 0, fnum2 = 0, fres = 0;
    printf("\nEnter the dividend : ");
    scanf("%f",&fnum1);
    printf("\nEnter the divisor : ");
    scanf("%f",&fnum2);

    fres = Divide(fnum1, fnum2);
    if(fres == -0)
    {
        printf("\nDivision is undefined ");
        return  0;
    }

    printf("\nDivision is %f",fres);
    
    return 0;
}

float Divide(float fno1,float fno2)
{
    float fres = 0;
    fres = fno1 / fno2;
    if(fno2 == 0)
    {
        return -0;
    }
    
    return fres;
}