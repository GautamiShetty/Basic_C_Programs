#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char sname[20] = {};

    printf("\nEnter the name : ");
    gets(sname);
    printf("\n%s",sname);
    printf("Require string in ANSI code is ");
    for(i = 0; sname[i] != '\0'; i++)
    {
        printf("%d",sname[i]);  
    }
    printf("\nThanks for visiting.");
    return 0;
}
