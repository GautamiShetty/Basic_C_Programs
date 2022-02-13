#include <stdio.h>
#include <conio.h>

void print(int ino)
{
    if(ino<10)
    {
        printf("\nHello");
    }
    else
    {
        printf("\nDemo");
    }
}

int main()
{
    int inum = 0;

    printf("\nEnter the number : ");
    scanf("%d",&inum);

    print(inum);

	getch();
	return 0;
}
