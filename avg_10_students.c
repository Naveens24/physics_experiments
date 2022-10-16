#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10];
    float avg;
    printf("Enter the number(marks) of 10 students: ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        avg+=arr[i];
        
    }
    avg = avg/10;
    printf("Average of 10 Students is: %.1f",avg);
    getch();
}
