#include <stdio.h>

void main() {
	char carr[5] = { 'A', 'B', 'C', 'D', 'E' };
	printf("%p %p %p %p %p\n", carr, carr + 1, carr + 2, carr + 3, carr + 4);

	int iarr[5] = { 10,20,30,40,50 };
	printf("%p %p %p %p %p\n", iarr, iarr + 1, iarr + 2, iarr + 3, iarr + 4);
}