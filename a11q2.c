//Cian Ferriter 17392773

#include <stdio.h>
#include <math.h>


void primefactorization(int n);

int main(void)
{
	int number;
	printf("Please Enter an Input for N:");
	scanf("%d", &number); 
	

	primefactorization(number);
	
	return 0;
}

//function to calculate prime factors
void primefactorization(int n)
{
	int i;
	printf("The prime factorization number(s) of %d are ( ", n);
	for(i=2; i<=n; i++) 
	{
		while(n%i == 0)
		{
			printf("%d ", i);
			n= n/i;
		}
	}
	printf(")");
	return;
}