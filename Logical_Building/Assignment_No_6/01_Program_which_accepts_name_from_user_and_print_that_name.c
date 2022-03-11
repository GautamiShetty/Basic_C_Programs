#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20];

    printf("\nEnter the name : ");
    scanf("%[^\n]",name);
    
    printf("Entered name : %s",name);
    getch();
    return 0;
}