#include <stdio.h>

// Struture for storing values.
struct time_struct{
	int hour;
	int minute;
	int second;
};

struct time_struct update(struct time_struct time);

int main(){
	int hour, minute, second;

	// Take time as input.
	printf("Enter the time in 24 hour format:\n");
	printf("Hours: ");
	scanf("%d", &hour);
	printf("Minutes: ");
	scanf("%d", &minute);
	printf("Seconds: ");
	scanf("%d", &second);

	// If time entered is Invalid then exit.
	if (hour > 23 || hour < 0 || minute > 59 || minute < 0 || second > 59 || second < 0 ){
		printf("\nTime you Entered is Invalid!\n");
		return 1;
	}

	struct time_struct time={hour, minute, second};

	// Print Required Result.
	printf("\nPrevious Time:");
	printf("\n%02d:%02d:%02d\n", time.hour, time.minute, time.second);

	time=update(time);
	printf("\nUpdated Time(+1 Sec):");
	printf("\n%02d:%02d:%02d\n\n", time.hour, time.minute, time.second);

	return 0;
}


struct time_struct update(struct time_struct time)
{
	time.second++;

	// Update Minute
	if (time.second >= 60)
	{
		time.minute++;
		// Update Hours
		if (time.minute >= 60)
		{
			time.hour++;
			if (time.hour >= 24)
			{
				time.hour=0;
			}
			time.minute=0;
		}
		time.second=0;
	}


	return time;
}
