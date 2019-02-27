#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
char msg[]="make this string uppercase";
char ch;
int i;

/* uppercase ascii = 65-90 lowercase ascii 97-122, 97 - 65 = 32*/

	if(i=0; i<=msglen(msg); i++)
	{
		if(msg[i]>=97 && msg[i]<=122)
			msg[i] = msg[i]-32;
	}

printf("%s ", msg)

return 0;
}