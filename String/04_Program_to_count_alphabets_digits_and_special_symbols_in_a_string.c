#include <stdio.h>
#include <conio.h>

int main()
{
	int alpha = 0, digit = 0, symbol = 0, i = 0;
	char cstr[20] = {};

	printf("\nEnter the string : \n");
	scanf("%[^\n]",&cstr);

	for(i = 0; cstr[i] != '\0' ; i++)
    {
        if((cstr[i] >= 'A' && cstr[i] <= 'Z') || (cstr[i] >= 'a' && cstr[i] <= 'z'))
        {
            alpha++;
        }
        else if((cstr[i] >= '0' && cstr[i] <= '9'))
        {
            digit++;
        }
        else
        {
            symbol++;
        }
    }
    printf("\nTotal number of alphabets in the strings : %d\nTotal number of digits in the strings : %d \nTotal number of special symbols in the strings : %d ",alpha, digit, symbol);

	getch();
	return 0;
}
