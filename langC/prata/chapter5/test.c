#include <stdio.h>

void main(void)
{
	int i = 0;
	while (i++ < 5) {
		printf("%5d", i);
	}
	printf("\n");

	if (-1) printf("yes -1\n");
	if (1) printf("yes 1\n");
	if (0) printf("yes\n");
}
