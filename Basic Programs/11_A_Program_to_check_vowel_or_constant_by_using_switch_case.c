#include <stdio.h>
#include <conio.h>

int main()
{
    int letter = 0;

    printf("Enter any alphabet: \n");
    scanf("%c",&letter);
    if((letter>= 'A' && letter <= 'Z')||(letter>= 'a' && letter <= 'z'))
    {
        switch (letter)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                printf("%c is vowel",letter);
                break;

            default:        
                printf("%c is consonent",letter);
        }                   
    }
    else 
    printf("Invalid Alphabet!!!");
    getch();
    return 0;
}