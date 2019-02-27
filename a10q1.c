#include <stdio.h>
#include <math.h>
//written by Cian Ferriter 17392773
double area(double base, double height);

int main(void)
{


	double base, height, areaTriangle;

	printf("enter a value for the base\n");
	scanf("%lf", &base);

	printf("enter a value for the height\n ");
	scanf("%lf", &height);

	areaTriangle = area(base, height);

	printf("the area of the triangle is: %lf", areaTriangle);

}


double area(double x, double y)
{
	double areaTriangle;
	areaTriangle = 0.5*x*y;
	return areaTriangle;

}
