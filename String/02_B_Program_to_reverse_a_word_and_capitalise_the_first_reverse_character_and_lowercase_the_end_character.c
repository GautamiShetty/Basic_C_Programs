#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20] = {}, revName[20] = {};
    int i  = 0, j = 0, len = 0;
    printf("\nEnter the string : ");
    scanf("%[^\n]",&name);

    while(name[i] != '\0')
        {
            len++;
            i++;
        }

    for(i = 0, j = len - 1; i < len, j >= 0; i++, j--)
        {
            revName[j] = name[i];
        }

    if(revName[0] >= 'a' && revName[0] <= 'z')
        {
            revName[0] -= 32;
        }

    while(revName[len-1] >= 'A' && revName[len-1] <= 'Z')
        {
            revName[len-1] += 32;
        }

    printf("\nReverse of %s is %s",name, revName);

    printf("\nThanks for visiting.");

    getch();
    return 0;
}
