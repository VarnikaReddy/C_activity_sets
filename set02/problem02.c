#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a , b , c , isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a , b , c);
    output(a , b , c , isscalene);
    return 0;
}

int input_side()
{
    int n;
    printf("enter the value");
    scanf("%d",&n);
    return n;
}

int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && a!=c)
    {
        return 1;
    }
    else if(a==0 && b==0 && c==0)
    {
           return 0;
    }
    else
    {
        return -1;
    }
}

void output(int a, int b, int c,int isscalene)
{
   if(isscalene>0)
   {
    printf("the triangle is scalene");
   }
   else if(isscalene==0)
   {
    printf("this is not a triangle");
   }
   else
   {
    printf("the triangle is not scalene");
   }
}