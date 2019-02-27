#include <stdio.h>
/*
  Written by: Neil Hurley (neil.hurley@ucd.ie) and edited by Cian Ferriter (17392773)
  Program to compute the kth largest value in an array
  Input: a[]: the array values. 
  Output: the kth largest value in the array.
*/

#define MAX_SIZE 5000

int main(void)
{
  int i, j, k, minindx, p;
  double a[MAX_SIZE], b[MAX_SIZE];
  double tmp, min;
  FILE *fp;
  

  fp = fopen("floats.txt", "r");

  for (i = 0;i<MAX_SIZE;i++)
    {
      fscanf(fp, "%lf", &a[i]);
    }
  fclose(fp);
  
  printf("enter value for k\n");
  scanf("%d", &k);
  
  /* add in this function to filter the array*/
  
	int l = 0;
	for (p=0;p<MAX_SIZE;p++)
	{
	if (a[p] >0.5)
		{
	
			b[l++]= a[p];
	
		}
	}
		 

  /* Run the outer loop k times, each time around the outer loop
     the (j+1)st smallest value is found and placed in position j
     of the loop */
  
  for (j=0;j<MAX_SIZE;j++)
    {
      min = b[j];
      minindx=j;

      /* the inner loop starts are i=j+1 i.e. it starts at
	 the next element of the array AFTER the position in which
	 the previous smallest value was placed. Therefore it finds
	 the next smallest value, excluding all values already found
	 and stored in b[0],...,b[j]
      */
      for (i = j+1;i<MAX_SIZE;i++)
	{
		
	  if (b[i]>min)
	    {
			
	      min = b[i];
	      minindx = i;
	    }
	}
	
      /* swap a[j] and a[minindx] */
      tmp = b[j];
      b[j] = b[minindx];
      b[minindx] = tmp;
    }
  printf("The kth largest value in the array is %lf\n", b[k-1]);
  
  if(b[k-1]==0)
  {
	  printf("sorry mate we dont have any values of k for this.\n");
  }


  return 0;
}