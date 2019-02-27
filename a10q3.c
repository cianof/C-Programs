#include <stdio.h>
#include <math.h>

double value(double euro);

int  main(void)
{
	double euro, sterling;

	printf("enter your value in Euro:\n");
	scanf("%lf", &euro);

	sterling = value(euro);
	printf("the value in sterling is: %lf", sterling);


}


double value(double x)
{
	double sterling;
	sterling = .8*x;
	return sterling;

}