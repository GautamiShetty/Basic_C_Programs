#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '0';

    printf("Enter the alphabet: \n");
    scanf("%c",&ch);

    if(ch>=65 && ch<= 90)
    {
        printf("Given character is an uppercase");
    }
    else if (ch >= 97 && ch<= 122)
    {
        printf("Given character is a lowercase");
    }
    else 
    {
        printf("Invalid alphabet");
    }

    getch();
    return 0;
}