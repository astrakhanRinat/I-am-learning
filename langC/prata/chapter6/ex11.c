#include <stdio.h>

void main(void)
{
	int amount;
	float i, j;
	float ii = 1.0;
	float sum1 = 1.0;
	float sum2 = 1.0;

	printf("enter amount of elements of sequencis: ");
	scanf("%d", &amount);

	for (i = 2.0; i <= amount; i++) {
		sum1 += 1.0 / i;
		ii *= -1.0;
		sum2 += ii / i; 

		j = i;
		while (j == 20.0 || j == 100.0 || j == 500.0 || j == 10000) {
			printf("when amount is %.0f sum1 is %f, sum2 is %f\n", j, sum1, sum2);
			j++;
		}
	}
}
