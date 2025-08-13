18. Calculate area & perimeter of a rectangle. A=L*B,P=2(L+B)
#include <stdio.h>
int main()
{
    float L, B;

    printf("Enter length and breadth: ");
    scanf("%f %f", &L, &B);

    printf("Area = %.2f\n", L * B);
    printf("Perimeter = %.2f\n", 2 * (L + B));

    return 0;
}
