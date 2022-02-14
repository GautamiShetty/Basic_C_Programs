#include<stdio.h>
#include<string.h>

int main()
{
    char password[8] = {'\0'};
    int count = 0;

    printf("\nEnter the password:");
    scanf("%s",password);
    if(strcmp(password,"khush12@")== 0)
    {
        printf("\nCorrect Password");
    }
    else
    {
        printf("\nIncorrect Password");
    }
    printf("\nThanks for visiting");
    return 0;
}
