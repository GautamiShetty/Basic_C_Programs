#include<stdio.h>
#include<conio.h>
int main()
{
    int ascii = 0;
    
    printf("\n\t Your ASCII table is below => \n");

    while(ascii<128)
        {
            printf("\t %3d = %c. \n",ascii, ascii);
            ++ascii;
        }
    printf("\n\tThanks for visiting");    

    getch();
    return 0;
}
