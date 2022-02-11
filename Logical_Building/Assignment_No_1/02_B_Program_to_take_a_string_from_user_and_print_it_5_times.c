#include<stdio.h>
#include<conio.h>

display(char*);

int main()
{
    char cstr[20] = {};
    printf("\nEnter the string : ");
    scanf("%s",&cstr);

    display(cstr);
    getch();
    return 0;
}

display (char *cstr)
{
    int i = 0;
    while(i < 5)
    {
        printf("\n%s",cstr);
        i++;
    }
}