#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b ,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a, &b, &c);
    if (a>b && a>c)
    {
        printf("%d is greatest among three number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is greatest among three number",b);
    
    }
    else 
    {
        printf("%d is greatest among three number",c);
    }
    
    
}