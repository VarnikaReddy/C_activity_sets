#include <stdio.h>
#include <math.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a , b , gcd , LCM;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a , int b)
{
    int temp;
    while(b!=0)
    {
    temp=b;
    b=a%b;
    a=temp;
    }
    return a;
}

void output(int a , int b , int gcd)
{
    printf("the gcd of %d and %d is %d",a,b,gcd);
}
