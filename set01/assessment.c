#include <stdio.h>
#include <math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n , sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n , sqrroot);
    return 0;
}

float input()
{
    float n;
    printf("enter the value of number");
    scanf("%f",&n);
    return n;
}

float square_root(float n)
{
   float guess = n;
   float previous_guess;
   float epsilon = 0.00001;
  while (fabs(guess - previous_guess) > epsilon)
  {
    previous_guess = guess;
    guess = (guess + (n / guess)) / 2;
  }
  return guess;
}

void output(float n , float sqrroot)
{
    printf("the square root of %f is %f",n,sqrroot);
}