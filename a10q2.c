#include <stdio.h>
#include <math.h>


double area(double radius);

int main(void)
{
	double radius, areaCircle;

	printf("please enter value for radius: \n");
	scanf("%lf", &radius);

	areaCircle = area(radius);
	printf("the area of the circle is: %lf ", areaCircle);


}




double area(double x)
{
double areaCircle;
areaCircle = x*x*M_PI;
return areaCircle;

}