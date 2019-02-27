#include  <stdio.h>
#define MAX_STR_LEN 100

//written by Cian Ferriter 17392773

int main(void)
{
	char msg[MAX_STR_LEN];
	printf("please enter the dogtastic string you want to count: \n");
	fgets (msg, 100, stdin);
	int i, count;
	i = 0;
	count = 0;
	
	while(msg[i] != '\0')
	{
		if(!(msg[i] >= 'a' && msg[i] <= 'z' || msg[i] >='A' && msg[i] <= 'Z') && msg[i+1] == 'd' || msg[i+1] == 'D'
		&& msg[i+2] == 'o' || msg[i+2] == 'O' && msg[i+3] ==  'g' || msg[i+3] == 'G' && msg[i+4] == 's' || 
		msg[i+4] == 'S' && !(msg[i+5] >= 'a' && msg[i+5] <= 'z'|| msg[i+5] >= 'A' && msg[i+5] <='Z') )
		{
			count++;
		}


		if(i==0 && msg[i]=='d' || msg[i]=='D' && msg[i+1] == 'o' || msg[i+1] == 'O' && msg[i+2] == 'g' || msg[i+2] == 'G'
			&& msg[i+3] == 's' || msg[i+3] == 'S' && !(msg[i+4] >= 'a' && msg[i+4] <= 'z'|| msg[i+4] >= 'A' && msg[i+4] <='Z') )
		{
			count++;
		}
	
		i++;
	}

	printf("the word 'dogs' appears %d times", count);



	return 0;
}