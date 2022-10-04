#include<stdio.h>
#include<conio.h>

int main()
{
    int  u, t , a;
    float s;
    printf("Enter the value of u : ");
    scanf("%d ",&u);
    printf("Enter the value of a : ");
    scanf("%d ",&a);
    printf("Enter the value of t : ");
    scanf("%d ",&t);

    s=(u*t)+((0.5*a*t*t));
    printf("The value of S=u.t + 1/2 a.t.t = %f ",s);
    getch();
}