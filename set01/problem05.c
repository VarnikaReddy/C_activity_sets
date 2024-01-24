#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int n , a , b , c , largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a , b ,c);
    output(a , b , c , largest);
    return 0;
}

int input()
{
    int n;
    printf("enter the number");
    scanf("%d" , &n);
    return n;
}

int compare(int a, int b, int c)
{
    int largest;
    if(a>b && a>c)
    {
        largest=a;
        return largest;
    }
    if(b>a && b>c)
    {
        largest=b;
        return largest;
    }
    else
    {
        largest=c;
        return largest;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("largest of a , b , c is %d", largest);
}
