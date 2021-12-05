#include <stdio.h>
#include <conio.h>
int main()
{
    int a=0,b=0; //max = 0;
    printf("\nEnter the two integers: ");
    scanf("%d %d",&a,&b);
    if(a!=b)
    {
        if(a>b){
        printf("\n%d is greater then %d\n", a, b);
        }
        else
        printf("\n%d is less then %d\n",a, b);
    }

    else
    printf("\n%d and %d are equal", a, b);
    //You can also use ternary operator
    // a==b? printf("%d is equal to %d\n",a ,b) : ((a>b) ? printf("%d is greater than %d \n",a ,b): printf("%d is less than %d\n",b, a));
    //You can also use if but you have to add one more variable(max) for that
    
    // if(a == b){
    //     printf("\nBoth numbers are same");
    // }
    // if( b > a)
    // {
    //     max = b;
    // } 
    // if(a > b) 
    // {
    //     max = a;
    // }
    // printf("\nLargest number = %d", max);
    getch();
    return 0;
}