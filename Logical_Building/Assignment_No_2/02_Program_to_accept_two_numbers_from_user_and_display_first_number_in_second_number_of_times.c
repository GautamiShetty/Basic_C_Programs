#include <stdio.h>
#include <conio.h>

void display(int ino , int icnt)
{
    int i = 0;
    printf("\n Required output is as follows : \n");
    for(i = 0; i < icnt; i++)
    {
        printf("%d ",ino);
    }

    printf("\nThanks for visiting.");

}

int main()
{

    int inum = 0, icnt = 0;

    printf("\nEnter the number to display : ");
    scanf("%d",&inum);

    printf("\nEnter its frequency : ");
    scanf("%d",&icnt);

    display(inum, icnt);
	getch();
	return 0;
}
