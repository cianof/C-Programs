#include <stdio.h>
#include <math.h>

double root(double a, double b, double c, int arg);
double a, b, c, result;
double discriminant;
int argument;

int main(void)
{
	double result;

	printf("enter value for a, b and c respectively: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("which root would you like? 1 or 2?\n");
	scanf("%d", &argument);
	
	if (a == 0 && b == 0 && c == 0)
	{
		printf("youre a bad person");
	}


	else
	{
		result = root(a, b, c, argument);
		if (result != 0)
		{
			printf("the root is: %lf", result );
		}
	}
	

return 0;
}

double root(double x, double y, double z, int arg)
{
	double result;
	discriminant = (b*b-4*a*c);
	if(discriminant<0)
	{
		printf("this equation has imaginary roots");
		result = 0;
		return result;
	}
	else if(arg == 1)
	{
		result = (-b + sqrt(discriminant)/2*a);
		return result;
	}
	else if(arg == 2)
	{
		result = (-b - sqrt(discriminant)/2*a);
		return result;
	}
}