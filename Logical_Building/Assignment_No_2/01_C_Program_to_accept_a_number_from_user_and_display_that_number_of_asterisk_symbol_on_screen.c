#include <stdio.h>
#include <conio.h>

void asterisk(int ino)
{
    int icnt = 0;
    if (ino < 0)
    {
        printf("\nInvalid number!!!");
    }

    putchar('\n');

    for(icnt = 0; ino > icnt; icnt++)
    {
        printf(" * ");
    }
}

int main()
{
    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d", &inum);

    asterisk(inum);

    printf("\nThanks for visiting.");
    getch();
    return 0;
}
