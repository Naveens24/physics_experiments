#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
       printf ("The real roots are = %.1f" " and " "%.1f", r1, r2);
    }

    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
         printf ("roots are equal =%.1f and  %.1f", r1, r2);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf(" Imaginary root1 = %.1f + (%.1f)i and root2 = %.1f - (%.1f)i", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
