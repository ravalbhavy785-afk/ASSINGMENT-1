14. Convert celcius into Fahrenheit F = (9/5 * C)+32
#include <stdio.h>
int main()
{
    float c;

    printf("Enter Celsius: ");
    scanf("%f", &c);
    printf("%.2f Celsius = %.2f Fahrenheit\n", c, (9.0/5)*c + 32);

    return 0;
}
