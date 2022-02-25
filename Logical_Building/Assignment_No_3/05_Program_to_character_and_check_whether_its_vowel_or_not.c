#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkVowel(char ch)
{
    if(ch == 'A' || ch == 'a' ||ch == 'E' ||ch == 'e' ||ch == 'I' ||ch == 'i' ||ch == 'O' ||ch == 'o' ||ch == 'U' ||ch == 'u')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    int result = 0;

    printf("\nEnter the alphabet : ");
    scanf("%c",&ch);

    result = checkVowel(ch);

    if(result == TRUE)
    {
        printf("\nIt is a Vowel.");
    }
    else
    {
        printf("\nIt is not Vowel.");
    }
    
    getch();
    return 0;
}