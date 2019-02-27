#include <stdio.h>
#define MAX_SIZE 100
//Cian Ferriter 17392773

int i, words;
int word(char str[]);
int main(void)

{
	char msg[MAX_SIZE];
	int i, words;

	printf("enter a string: ");
	gets (msg);


	words = word(msg);
	printf("the number of words in the string is %d", words+1);


}

int word(char str[])
{
	int i = 0; 
	int words, count;
	char msg[MAX_SIZE];

	count = 0;
		for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' && str[i+1]!= ' ') // doesnt count consecutive spacing
		{
			count++;
		}
	
	}
	return count;

}
