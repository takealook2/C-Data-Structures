#include <stdio.h>
#define MAX_SIZE 100
float sum(float[], int);
int i;

void main(void) {
	float input[MAX_SIZE];
	float answer;

	for (i = 0; i < MAX_SIZE; i++) {
		input[i] = (float)i;
		// printf("%f\n", input[i]);
	}
	answer = sum(input, MAX_SIZE);
	printf("The sum is: %f\n", answer);
}

float sum(float list[], int n) {
	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++) {
		tempsum += list[i];
	}
	return tempsum;
}

