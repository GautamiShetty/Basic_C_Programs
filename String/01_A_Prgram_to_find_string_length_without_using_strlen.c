#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20] = {};
    int len = 0;
    printf("\nEnter the string : ");
    scanf("%s",&name);
    len = printf("%s",name);
    system("cls");

    printf("\nLength of %s is %d",name, len);
    getch();
    return 0;
}