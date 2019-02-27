//written by Cian Ferriter 17392773

#include <stdio.h>
#include <math.h>



double cubedrt(double c);

int main(void)
{ 
	double input, t;
	printf("please enter the value to compute: \n");
	scanf("%lf", &input);
    
	t = cubedrt(input);
	  
	
	printf("root=%.20f root*root*root =%.20f\n", t, t*t*t);
	
	return 0;
}

double cubedrt(double c)
{
	double EPSILON = 0.0;
	int numiters = 0, maxiters = 100000;


		double t = c;
		
		/* compute the cubed root of a number c*/

		while (numiters<maxiters && (fabs(t*t*t - c) > c*EPSILON))

	 	 {
	    	t = t - (t*t*t -c)/(3.0*t*t);
	    	numiters++;
	  	 }
	  
	  
	  	printf("Loop terminated after %d iterations\n", numiters);

	 return t;
}