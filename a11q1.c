// Cian Ferriter 17392773
#include <stdio.h>
#include <math.h>

typedef struct Time
{
	int days;
	int hours; 
	int minutes;
	int seconds;

} Time;

Time convert_time(int total_secs);
int main(void)
{
	int j;
	Time t;
	printf("please enter the total number of seconds: ");
	scanf("%d", &j);

	t = convert_time(j);

	printf("Days: %d \nHours: %d \nMinutes: %d \nSeconds: %d \n", t.days, t.hours, t.minutes, t.seconds);
	return 0;
}

Time convert_time(int total_secs)
{
	Time t;
	int remaining_secs = total_secs;
	t.days = remaining_secs / (24*60*60);
	remaining_secs %= (24*60*60);
	t.hours = remaining_secs / (60*60);
	remaining_secs %= (60*60);
	t.minutes = remaining_secs / 60;
	remaining_secs %= 60;
	t.seconds = remaining_secs;
	
	return t;

}