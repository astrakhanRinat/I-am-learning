#include <stdio.h>

void main(void)
{
	float num1, num2;
	printf("enter 2 float num: ");
	while(scanf("%f %f", &num1, &num2) == 2) {
		printf("%f\n", (num1 - num2) / (num1 * num2));
		printf("enter 2 float num or q for exit: ");
	}	
}
