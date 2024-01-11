#include <stdio.h>
#include <string.h>


// Vehicle Data.
char vehicles[20][3][20] = {
	{"Maruti 800", "02/01", "41000"},
	{"Maruti Suzuki", "07/01", "800000"},
	{"Maruti Van", "04/02", "50000"},
	{"Gypsy", "08/02", "62000"},
};

void displayVehicleDetails(char *vehicleName, char *startMonth, char *endMonth){
	printf("%-15s%-15s%-15s\n", "Vehicle Name", "Month of Sale", "Price");

	// Compare vehicle Data.
	for (int i=0; i<20; i++)
	if (strcmp(vehicles[i][0], vehicleName) == 0 || strlen(vehicleName) >= 1)
	if (strcmp(vehicles[i][1], startMonth) >= 0 && strcmp(vehicles[i][1], endMonth) <= 0)
		// Print if vehicle data satisfy the users conditions.
		printf("%-15s%-15s%-15s\n", vehicles[i][0], vehicles[i][1], vehicles[i][2]);
}

int main(){
	char vehicleName[20], startMonth[20], endMonth[20];

	// Take Input.
	printf("Enter vehicle's Name. Leave Empty if unsure.\n:: ");
	scanf("%[^\n]", vehicleName);

	printf("Enter Starting Month.\n:: ");
	scanf("%s", startMonth);

	printf("Enter Ending Month.\n:: ");
	scanf("%s", endMonth);

	displayVehicleDetails(vehicleName, startMonth, endMonth);

	return 0;
}

