19.Calculate area of a circle. A=22/7*R*R
#include <stdio.h>
int main()
 {
    float R;

    printf("Enter radius: ");
    scanf("%f", &R);

    printf("Area = %.2f\n", (22.0/7) * R * R);

    return 0;
}
