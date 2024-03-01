#include <stdio.h>
struct _triangle
typedef struct _triangle Triangle{
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle t);
void output(Triangle t);

int main()
{
	float base , altitude , area , t;
	t=input_triangle();
	find_area(t);
	void output(t);
	return 0;
}

Triangle input_triangle()
{
	float t;
	printf("enter the value of base and altitude");
	scanf("%f",&t);
	return t;
}

void find_area(Triangle t)
{
	float area;
	area=(base*altitude)/2;
}

void output(Triangle t)
{
	printf("the area of the triangke is %f",area);
}