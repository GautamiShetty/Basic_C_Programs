#include<stdio.h>
#include<ctype.h>
int main()
{
    char letter = '\0';
    printf("\nEnter the alphabet: ");
    scanf("%c",&letter);

    if(islower(letter) != 0)
    {
        printf("\nEntered alphabet is lowercase");
    }
    else if(isupper(letter) != 0)
    {
        printf("\nEntered alphabet is uppercase");
    }
    else
    {
        printf("\nInvalid !!!");
    }

    return 0;
}