#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n;
    n=input_triangle();
    int t[n];
    Triangle smallest;
    input_n_triangles(n , n);
    find_area(t);
    find_n_areas(n , n);
    smallest=find_smallest_triangle(n , n);
    output(n , n , smallest);
    return 0;
}

Triangle input_triangle()
{
    int n;
    printf("enter the number of triangles");
    scanf("%d",&n);
    return n;
}

void input_n_triangles(int n , Triangle t[n])
{
    int t[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&t[i])
        {
            
        }
    }
}
