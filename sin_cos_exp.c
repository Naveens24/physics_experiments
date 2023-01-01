#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Enter the value of x : ");
    scanf("%lf", &x);

    double radian = x * (M_PI / 180);

    printf("sin value is %.4lf \n", sin(radian));
    printf("cos value is %.4lf \n", cos(radian));
    printf("exponential value is %.4lf \n", exp(x));
    return 0;
}
