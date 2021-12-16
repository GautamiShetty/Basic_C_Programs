// In this program it is assumed that each subject is out of 100 marks
// Assumed three subjects are: Maths, English and Science
#include<stdio.h>
#include<conio.h>
int main()
{
    float english = 0.0, maths = 0.0, science = 0.0,
    prctge = 0.00;
    char grade = '0';

    printf("\nEnter Marks=> \n\n");
    printf("Enter Maths marks: \n\t");
    scanf("%f",&maths);
    printf("Enter English marks: \n\t");
    scanf("%f",&english);
    printf("Enter Science marks: \n\t");
    scanf("%f",&science);

    if(35>maths||35>english||35>science)
    {
        printf("\n\tYou have failed in one subject.\n");
        grade = 4;
    }

    prctge = (english + maths + science);
    prctge /= 3;
       
    printf("\n\tPercentage = %.2f\n", prctge);

    grade = prctge / 10;
    switch (grade)
    {
        case 10:
        case 9:
            printf("\tGrade : A");
            break;
        case 8:
            printf("\tGrade : B");
            break;
        case 7:
            printf("\tGrade : C");
            break;
        case 6:
            printf("\tGrade : D");
            break;
        case 5:
            printf("\tGrade : E");
            break;
        default:
            printf("\tGrade : F");
            break;
        
    }

    printf("\n\tThanks for visiting.");

    getch();
    return 0;
}