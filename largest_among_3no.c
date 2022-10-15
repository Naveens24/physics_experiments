#include<stdio.h>
#include<conio.h>

int main()
{
    
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        (a>c) ? printf("%d is greater",a)
        : printf("%d",c);
    }
    else
    {
        (b>c) ? printf("%d is greater",b)
        :printf("%d is greater",c);
    }
    getch();
}
