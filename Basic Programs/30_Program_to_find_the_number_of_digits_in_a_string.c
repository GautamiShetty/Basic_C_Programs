#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
    {
        char c_string[20] = {};
        int len = 0, i = 0, j = 0, num[10] = {};

        printf("\nEnter your string :");
        scanf("%s",&c_string);
        len = strlen(c_string);    

        for(i = 0; i < 10; i++)
            {
                for(j = 0; j < len; j++)
                    {
                        //printf("\n%d\t %c\t %c",i,(i+48),c_string[j]);
                        if((i) == c_string[j] - 48)
                            {
                                num[i]++;
                            }
                    } 
                printf(" %d",num[i]);       
            }

        getch();
        return 0;
    }