4.Divide two numbers
#include<stdio.h>
int main()
{
int a, b;
printf("Enter value for a and b, for division (a/b)\n");
scanf("%d%d", &a, &b);
if( b !=0)
printf("Division of %d and %d is %d\n", a, b, a/b);
return 0;
}
