#include <stdio.h>
#define MAX_STR_LEN 100

//written by Cian Ferriter 17392773

int main(void)
{
	char msg[MAX_STR_LEN];
	printf("enter a string: ");
	fgets (msg, 100, stdin);
	int i, count; 
	 
	//counts spaces and this essentially means it counts words

	
	count = 0;
	for(i=0; msg[i] != '\0'; i++)
	{
		if(msg[i] == 32 && msg[i+1]!= 32) // doesnt count consecutive spacing
		{
			count++;
		}
	
	}
//adding +1 onto the count ensures that the first word in the string is included
	printf(" the number of words in this string is %d", count + 1);
	
	
	
	
	
	
	
	return 0;
}