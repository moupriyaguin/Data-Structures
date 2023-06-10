#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};
struct complex s1,s2,sum;
int add(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main()
{
    printf("Enter complex number:\n");
    scanf("%d+%di",&s1.real,&s1.imaginary);
    printf("Enter another complex number:\n");
    scanf("%d+%di",&s2.real,&s2.imaginary);
    sum.real = add(s1.real,s2.real);
    sum.imaginary = add(s1.imaginary,s2.imaginary);
    printf("Sum = %d + %di",sum.real,sum.imaginary);
    return 0; 
}