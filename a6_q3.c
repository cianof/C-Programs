#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define MAX_SIZE 100

/*written by Cian Ferriter (17392773). (based off lecture slide 10)
program	to	find the value in an integer array a[] of length N that	
occurs at least (N/2 + 1) times, if such a value exists*/

int main(void)
{
	int a[MAX_SIZE];
	int values[MAX_SIZE], count[MAX_SIZE];
	bool completed[MAX_SIZE], found;
	int l, r;
	int i, k;
	int special = 0;
	int p;
	found = false;


	printf("Enter desired length of array: ");
	scanf("%d", &l);
	printf("\nEnter desired range of array: ");
	scanf("%d", &r);

	for (i=0; i<l; i++)
	{
		a[i] = ( rand()%r ) + 1;
	}


	for (i = 0; i < l; i++)
	{
		completed[i] = false;
		count[i] = 0;
	}

/* this records the number of times each value apeears in an array*/

	for (i = 0; i < l; i++)
	{
		p = a[i];
		if (!completed[i])
		{
			count[special]++;
			completed[i] = true;
			for (k = i+1; k < l; k++)
			{
				if (a[k] == p)
				{
					completed[k] = true;
					count[special]++;
				}
			}
			values[special++] = p;
		}

	}



	printf("the array of which specifications were entered by user:\n");
	for (i=0; i<l; i++)
	{
		printf("%d ", a[i]);
	}


	 //Prints any value which occur more than half the length//


	printf("\n\nThe following values occur more than N/2 + 1 times: ");

	for (i=0; i< r ;i++)
	{
	
		if (count[i] >= (l/2 +1))
		{
			printf ("\nValue =%d Count =%d\n", values[i] ,
			count[i]) ;
			found = true;
		}
	}
//if in the event that there is no number which occurs n/2 + 1 times then the floowing print statement should suffice//
	if (found == false)
	{
		printf("\nsorry there are no values in this array which occur N/2 + 1 times or greater\n");
	}
}