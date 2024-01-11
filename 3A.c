#include <stdio.h>
#include <math.h>


int main(){
	double P=0, r=0.09;
	int n=0;

	printf("%-10s%-10s%-10s%-15s\n", "P", "r", "n", "V");

	// Calculate and print values
	for (int i = 0; i < 10; i++) {
		P+=1000;
		r=0;
		for (int j = 0; j < 11; j++) {
			r+=0.01;
			n=0;
			for (int k = 0; k < 10; k++) {
				n+=1;
				printf("%-10.0f%-10.2f%-10d%-15.2f\n", P, r, n, P * pow(1 + r, n));
			}
		}
	}

	return 0;
}

