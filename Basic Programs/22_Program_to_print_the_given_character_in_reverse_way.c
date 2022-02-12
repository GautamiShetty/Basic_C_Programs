#include<stdio.h>
#include<conio.h>
#define size 4
int main()
{
    char ch[size] = {};
    char revChar = '0';
    int i = 0;
    printf("\nEnter the characters: ");
    for(i = 0; i < size; i++)
    {
        printf("\nCharacter %d : ",i + 1);
        scanf("%c",&ch[i]);
        fflush(stdin); 
    }
    printf("\nGiven characters in reverse will be: ");
    for(i = 1; i <= size; i++)
    {
        printf("\nCharacter %d : %c",i,ch[size - i]);
        
    }
    getch();
    return 0;
}