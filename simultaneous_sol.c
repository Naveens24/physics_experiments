#include<stdio.h>
#include<conio.h>

int main()
{
  double a, b, c, p, q, r, x, y;
 
  //Taking inputs of co-efficient for both equations
  printf("Enter the coefficents of the first equation of the form ax+by=c\n");
  printf("\na = ");
  scanf("%lf ", &a);
  printf("b = ");
  scanf("%lf ", &b);
  printf("c = ");
  scanf("%lf ", &c);

  printf("Enter the coefficents of the second equation of the form px+qy=r\n");
  printf("p = ");
  scanf("%lf ", &p);
  printf("q = ");
  scanf("%lf ", &q);
  printf("r = ");
  scanf("%lf ", &r);
 
  if (((a*q - p *b) != 0) && ((b*p - q*a) != 0))
  {
    //In this case we have a unique solution and display x and y
    printf("The solution to the equations is unique\n");
    x = (c*q - r*b) / (a*q - p*b);
    y = (c*p - r*a) / (b*p - q*a);
 
    //Displaying the value
    printf("The value of x=%.2lf\n", x);
    printf("The value of y=%.2lf\n", y);
  }
  else
  if (((a*q - p*b) == 0) && ((b*p - q*a) == 0) && ((c*q - r*b) == 0) && ((c*p - r*a) == 0))
  {
    printf("Infinitely many solutions are possible\n");
    printf("The value of x can be varied and y can be calculated according to x's value using relation\n");
    printf("y=%lf+(%lf)x", (c/b), (-1*a/b));
  }
  else
    //No possible solution.
    if (((a*q - p*b) == 0) && ((b*p - q*a) == 0) && ((c*q - r*b) != 0) && ((c*p - r *a) != 0))
      printf("No Possible solution\n");

  getch();
}
