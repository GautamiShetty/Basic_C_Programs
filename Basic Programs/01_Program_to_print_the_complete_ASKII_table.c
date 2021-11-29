#include<stdio.h>
#include<conio.h>
int main()
{
    int askii = 0;
    
    printf("\n\t Your ASKII table is below => \n");

    while(askii<128)
        {
            printf("\t %3d = %c. \n",askii, askii);
            ++askii;
        }
    printf("\n\tThanks for visiting");    

    getch();
    return 0;
}
