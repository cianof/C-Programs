#include <stdio.h>

/* Written by Cian Ferriter 17392773.
 progam to covert decimal numbers into binary numbers*/

int main(void)
{
	int num, digit, a[1000];
	int f, i, tmp;
	digit = 0;
	
	
	printf("please enter a value. \n");
	scanf(" %d" , &num);
	
	
	for(i = 0; num > 0; i++)
	{
		digit = num%2;
		num = num/2;
		a[i] = digit;
	}
	
	for (f=0;f<(i/2); f++)
		{
			tmp = a[f];
			a[f] = a[i-f -1];
			a[i-f -1] = tmp;

		}
		
	/* array reversal as required*/
	for(f=0; f<i; f++)
	{
	printf("%d " , a[f]);
	}
	
	return 0;
}