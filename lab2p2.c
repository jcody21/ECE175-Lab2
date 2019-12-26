#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>

/*
Author: John Cody
Date created: 1/31/2018
Program Description:
*/

int main(void) {

	float rads;
	int numDays;
	const float safeLevel = 0.9;
	int i;
	bool safe;
	
	printf("Enter an initial amount of radiation(millirems) : ");
	scanf("%f", &rads);

	printf("Enter total days to display : ");
	scanf("%d", &numDays);

	printf("Day Radiation(Status)\n");

	for (i = 0; i <= numDays; i = i + 2) {
		safe = (rads <= safeLevel);
		if (!safe) {
			printf("%d %.4f(Unsafe)\n", i, rads);
		}
		else {
			printf("%d %.4f(Safe)\n", i, rads);
		}
		rads = rads / 2;
	}

	return 0;
}