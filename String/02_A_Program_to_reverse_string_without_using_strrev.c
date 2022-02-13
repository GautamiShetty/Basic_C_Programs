#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20] = {}, revName[20] = {};
    int i  = 0, j = 0, len = 0;
    printf("\nEnter the string : ");
    gets(name);

    //To calculate length
    while(name[i] != '\0')
    {
        len++;
        i++;
    }
    //To reverse in another array
    
    for(i = 0, j = len - 1; i < len, j >= 0; i++, j--)
    {
        revName[j] = name[i];
    }
    // for(i = 0, j = len - 1; i , len, j > 0, revName[j] = name[i]; i++,j--);

    printf("\nReverse of %s is %s",name, revName);
    
    getch();
    return 0;
}