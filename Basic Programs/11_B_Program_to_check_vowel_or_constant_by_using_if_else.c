#include<stdio.h>
#include<conio.h>
int main()
{
    char letter = '0', uppercase= '0', lowercase = '0';
    printf("\n\tEnter the alphabet: \n");
    scanf("%c",&letter);
    
    //if(letter == 'A' ||letter == 'E' ||letter == 'I' ||letter == 'O' ||letter == 'U' ||letter == 'a' ||letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u')
    uppercase = (letter == 'A'||letter == 'E'||letter == 'I'||letter == 'O'||letter == 'U');
    lowercase = (letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u');
    if((letter>= 'A' && letter <= 'Z')||(letter>= 'a' && letter <= 'z'))
    {
        if(uppercase||lowercase)
        {
            printf("\n\t%c is vowel",letter);
        }
        else
            printf("\n\t%c is consonent",letter);
    }
    else
        printf("\n\tInvalid alphabet!!!");


    printf("\n\tThanks for visiting\n");
    getch();
    return 0;
}