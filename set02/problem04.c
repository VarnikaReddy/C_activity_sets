#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    int n , sum;
    n=input_array_size();
    int a[n];
    input_array(n , a);
    sum=sum_composite_numbers(n , a);
    output(sum);
    return 0;
}

int input_array_size()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("enter the values of array \n");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
    int sum =0 , i;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        
    }
    return sum;
}

void output(int sum)
{
    if(sum>0)
    {
        
        printf("sum of composite numbers is %d",sum);
    }
    else if(sum<=0)
    {
        printf("no composite numbers in the array");
    }
}