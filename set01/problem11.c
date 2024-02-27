#include <stdio.h>
struct _complex 
{
	float real;
	float imaginary;
};
typedef struct _complex Complex;

void input_complex(Complex *a,Complex *b);
void add_complex(Complex a, Complex b,Complex *sum);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex a , b , sum;
    input_complex(&a,&b);
    add_complex(a,b,&sum);
    output(a,b,sum);
    return 0;
}

 void input_complex(Complex *a,Complex *b)
{
    printf("enter the real part");
    scanf("%f",a.real);
    printf("enter the imaginary part");
    scanf("%f",a.imaginary);
    printf("enter the real part");
    scanf("%f",b.real);
    printf("enter the imaginary part");
    scanf("%f",b.imaginary);
}

 void add_complex(Complex a, Complex b , Complex *sum)
{
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("the sum is %f+i%f",sum.real,sum.imaginary);
}
