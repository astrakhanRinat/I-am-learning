#include <stdio.h>

void main(void)
{
	const int rows = 5;
	int i, j;
	for(i = 0; i < rows; i++) {
		for(j = 0; j <= i; j++) {
			printf("$");
		}
		printf("\n");
	}
}
