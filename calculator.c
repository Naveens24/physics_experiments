#include <stdio.h>
#include<conio.h>
int main() {

  char op;
  float a, b;
  printf("Enter two operands(numbers): ");
  scanf("%f %f", &a, &b);
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  switch (op) {
    case '+':
      printf("%.1f + %.1f = %.1f", a, b, a + b);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f", a, b, a - b);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f", a, b, a * b);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f", a, b, a / b);
      break;
    
    default:
      printf("Error! operator is not correct");
  } 
  getch();
  return 0;
}
