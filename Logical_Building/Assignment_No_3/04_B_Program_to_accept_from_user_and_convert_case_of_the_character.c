#include<stdio.h>

char displayConvert(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
    {
        cValue += 32;
        return cValue;
    }
    else if((cValue >= 97) && (cValue <= 122))
    {
        cValue -= 32;
        return cValue;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char value = '\0', cret = '\0';

    printf("\nEnter character : ");
    scanf("%c",&value);

    cret = displayConvert(value);

    printf("\nRequired character : ");

    if(cret > 0)
    {
        printf("%c",cret);
    }
    else if(cret == 0)
    {
        printf("%c", cret);
    }
    else if(cret == -1)
    {
        printf("Invalid Character");
    }
    
    printf("\n\nThanks for visiting.");
    
    return 0;
}