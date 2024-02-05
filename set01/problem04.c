#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
    int a , b , sum , n;
    input(&a , &b);
    add(a , b , &sum);
    output(a , b , sum);
    return 0;
}

void input(int *a , int *b)
{
    printf("enter the number");
    scanf("%d" , a);
    printf("Enter the number: ");
    scanf("%d,b");
}

void add(int a , int b , int *sum)
{
    *sum=a+b;
}

void output(int a , int b , int sum)
{
    printf("sum is %d" , sum);
}
