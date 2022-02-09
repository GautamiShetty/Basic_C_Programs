#include<stdio.h>
#include<conio.h>

int main()
{
    int len = 0;
    char name[20] = {};

    printf("\nEnter the string : ");
    scanf("%s",name);
    for(len = 0; name[len] != 0; len++);
    printf("\nLength of %s is %d",name, len);

    getch();
    return 0;
}