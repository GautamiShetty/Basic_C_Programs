#include<stdio.h>
#include<conio.h>



int main()
{
    char cstr[20] = {}, sstr[20] = {};
    int i = 0, j = 0;

    printf("\nEnter the first string : ");
    scanf("%[^\n]",&cstr);

    fflush(stdin);

    printf("\nEnter the second string : ");
    scanf("%[^\n]",&sstr);

    while(cstr[j] != '\0')
    {
        j++;
    }

    for(i = 0; cstr[i] != '\0'; i++ )
    {
        if(cstr[i] != sstr[i])
        {
            break;
        }
    }
    if(i != j)
    {
        printf("\nStrings are not equal.");
    }
    else
    {
        printf("\nBoth strings are equal.");
    }
    getch();
    return 0;
}
