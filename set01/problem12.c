#include <stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);


int main()
{
    int n;
    n=get_n();
    Complex c[n] , sum;
    input_n_complex(n,c);
    sum=add_n_complex(n,c);
    output(n,c,sum);
    return 0;
}

int get_n()
{
    int n;
    printf("enter the number of complex numbers");
    scanf("%d",&n);
    return n;
}

Complex input_complex()
{
    Complex c;
    printf("enter the real part");
    scanf("%f",&c.real);
    printf("enter the imaginary part");
    scanf("%f",&c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=input_complex();
    }
}

Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}


Complex add_n_complex(int n, Complex c[n])
{
    int i;
    Complex sum={0,0};
    for(i=0;i<n;i++)
    {
        sum=add(sum,c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result)
{
    printf("sum is %f+i%f", result.real,result.imaginary);
}
