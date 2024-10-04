#include <stdio.h>

void main() {
	char carr[2][2] = { 'A','B','C','D' };
	printf("%p %p %p %p\n", &carr[0][0], carr, carr[0], carr[1]);
	printf("%p %p %p %p\n", &carr[0][0] + 1, carr + 1, carr[0] + 1, carr[1] + 1);
}