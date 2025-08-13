5. Add,multiply,subtract and divide two numbers
#include<stdio.h>
int main()
{
int a, b, addition, subtraction, multiplication, division;

printf("Enter a first number:");
scanf("%d",&a);

printf("Enter a second number:");
scanf("%d",&b);

addition = a+b;
subtraction = a-b;
multiplication = a*b;
division = a/b;

printf("The result of addition is :%d\n",addition);
printf("The result of subtraction is :%d\n",subtraction);
printf("The result of multiplication is :%d\n",multiplication);
printf("The result of division is :%d\n",division);
return 0;
}
