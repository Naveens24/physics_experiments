#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("It is even number ");
    }
    else
    {
        printf("It is odd number");
    }
    getch();
    
}