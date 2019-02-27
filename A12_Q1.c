//Cian Ferriter 17392773
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double sinpowerseries(double x);

int main(void)
{
	double input, sinmath, sinx, dif;
	
	
	printf("Enter the value of x (in radians) for which you would like to compute the sin of: \n");
	scanf("%lf", &input);

	sinx = sinpowerseries(input);

	sinmath = sin(input);
	dif = sinx - sinmath;

	printf("value of sin using math library is %lf \n", sinmath);
	printf("value of sin using power series function is %lf \n", sinx);
	printf("the difference bewteen answers is %lf \n", dif);

	return 0;
}

double sinpowerseries(double x)
{
	int fact, j, i;
	double sinx = 0;
	bool plus;
	plus = true;
	i = 1;
	//gets angle between 0 and 2pi
	x = fmod(x, (2*M_PI));
	
	while (i<25)
	{
		fact=1;
		for (j = 1; j <= i; j++)
		{
			fact = j*fact;
		}

		if (plus == true)
		{
			sinx = sinx + ((pow(x, i)) / fact);
			plus = false;
		}

		else
		{
			sinx = sinx - ((pow(x, i)) / fact);
			plus = true;
		}

		i = i+2;
	}	


	return sinx;
}