#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Author: John Cody
Date created: 1/31/2018
Program Description: This program adds all of the odd multiples of 9 and subtracts all of the even multiples of 9 that are less the user given value. 
The program then outputs the sum at the end. 
*/

int main(void) {

	int n = 0;
	int sum = 0;
	int i;

	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	for (i = 1; (i * 9) <= n; ++i) {
		if ((i * 9) % 2 > 0) {
			sum = sum + (i * 9);
		}
		else {
			sum = sum - (i * 9);
		}
	}
	
	printf("\nThe alternating sum of all positive numbers less than %d divisible by 9 is : %d\n", n, sum);

	return 0;
}