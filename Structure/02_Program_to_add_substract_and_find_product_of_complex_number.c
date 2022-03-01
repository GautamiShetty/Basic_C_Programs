#include<stdio.h>
#include<conio.h>

struct complex
    {
        int real;
        int imaginary;
    };

struct complex s_add (struct complex num1 , struct complex num2); 
struct complex s_substract(struct complex num1, struct complex num2);
struct complex s_product (struct complex num1 , struct complex num2);

int main()
{
    struct complex num1, num2, num3;
    struct complex add, product, substract;
    printf("\nEnter the real part of 1st number : ");
    scanf("%d",&num1.real);

    printf("\nEnter the imaginary part of 1st number : ");
    scanf("%d",&num1.imaginary);

    printf("\nEnter the real part of 2nd number : ");
    scanf("%d",&num2.real);

    printf("\nEnter the imaginary part of 2nd number : ");
    scanf("%d",&num2.imaginary);

    add = s_add(num1 ,num2);
    product = s_product(num1, num2);
    substract = s_substract(num1, num2);
    printf("\nAddition of complex number of %d + i%d and %d + i%d : %d + i%d.", num1.real, num1.imaginary, num2.real,num2.imaginary, add.real, add.imaginary);
    printf("\nSubstraction of complex number of %d + i%d and %d + i%d : %d + (%di).", num1.real,num1.imaginary, num2.real,num2.imaginary, substract.real , substract.imaginary);    
    printf("\nProduct of complex number of %d + i%d and %d + i%d : %d + i%d.", num1.real,num1.imaginary, num2.real,num2.imaginary , product.real, product.imaginary);

    printf("\n\nThanks for visiting.");

    getch();
    return 0;
}

struct complex s_add (struct complex num1 , struct complex num2)
{
    struct complex add;
    add.real = num1.real + num2.real;
    add.imaginary = num1.imaginary + num2.imaginary;
    return add;
}

struct complex s_product (struct complex num1 , struct complex num2)
{
    struct complex product;
    product.real = num1.real * num2.real;
    product.imaginary = num1.imaginary * num2.imaginary; \
    return product;
}

struct complex s_substract(struct complex num1, struct complex num2)
{
    struct complex substract;
    substract.real = num1.real - num1.real;
    substract.imaginary = num1.imaginary - num2.imaginary;

    return substract;
}
