#include <stdio.h>
typedef struct _triangle 
{
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
	float base , altitude , area;
	Triangle t;
	t=input_triangle();
	find_area(&t);
	void output(t);
	return 0;
}

Triangle input_triangle()
{
	Triangle t;
	printf("enter the value of base");
	scanf("%f",&t.base);
	printf("enetr the value of altitude");
	scanf("%f",&t.altitude);
	return t;
}

void find_area(Triangle *t)
{
	t->area=(t->base*t->altitude)/2;
}

void output(Triangle t)
{
	printf("the area of the triangle is %f",t.area);
}