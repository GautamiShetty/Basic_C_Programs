#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;
    char name[20] = {};

    printf("\n Enter the string : ");
    scanf("%s",&name);

    while(name[i] != 0)
    {
        i++;
    }

    printf("\n Length of %s is %d",name, i);
    getch();
    return 0;
}