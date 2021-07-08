#include <stdio.h>

void main(void)
{
	const float start = 1000000.0;
	const float perc_per_year = 1.08;
	const float waste = 100000.0;

	int year = 0;
	float amount = start;
	while (amount > 0) {
		amount = amount * perc_per_year - waste;
		year++;
		printf("year: %2d, amount of money: %.2f\n", year, amount);
	}

	printf("%d\n", year);
}
