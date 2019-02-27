//Cian Ferriter 17392773
//method 2 as required

#include <stdio.h>
void convert_time(int total_secs, int *days, int *hours, int *minutes, int *seconds);

int main(void)
{
	int j;
	printf("please enter the total number of seconds: ");
	scanf("%d", &j);
	int days;
	int hours; 
	int minutes;
	int seconds;

	convert_time(j, &days, &hours, &minutes, &seconds);

	printf("Days: %d \nHours: %d \nMinutes: %d \nSeconds: %d \n", days, hours, minutes, seconds);
	return 0;
}


void convert_time(int total_secs, int *days, int *hours, int *minutes, int *seconds)
{
	int d, h, m, s;
	int remaining_secs = total_secs;
	d = remaining_secs / (24*60*60);
	remaining_secs %= (24*60*60);
	h = remaining_secs / (60*60);
	remaining_secs %= (60*60);
	m = remaining_secs / 60;
	remaining_secs %= 60;
	s = remaining_secs;

	*days = d;
	*hours = h;
	*minutes = m;
	*seconds = s;
}