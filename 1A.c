#include <stdio.h>

// Struture for storing values.
struct time_struct{
	int hour;
	int minute;
	int second;
};

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
	if (hour > 24 || hour < 0 || minute > 60 || minute < 0 || second > 60 || second < 0 ){
		printf("\nTime you Entered is Invalid!\n");
		return 1;
	}

	struct time_struct time={hour, minute, second};

	// Print Required Result.
	printf("\nTime You Entered is:");
	printf("\n%02d:%02d:%02d\n\n", time.hour, time.minute, time.second);

	return 0;
}
