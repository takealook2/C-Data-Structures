#include <stdio.h>
int f(int j[]);

void main() {
	int i[5] = { 10,20,30,15,50 };
	f(i);
	printf("%d\n", i[0]);
}

int f(int j[]) {
	j[0] = j[0] + 1;
	return j[0];
}