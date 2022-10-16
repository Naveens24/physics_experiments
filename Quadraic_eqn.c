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
       printf ("The real roots = %.1f %.1f", r1, r2);
    }

    else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
         printf ("roots are equal =%.1f %.1f", r1, r2);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.1lf+%.1lfi and root2 = %.1f-%.1fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
