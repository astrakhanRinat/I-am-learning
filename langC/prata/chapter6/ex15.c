#include <stdio.h>

void main(void)
{
	const double deposit_per_year = 100.0;
	const double perc_simple = 1.1;
	const double perc_complex = 1.05;
	double result_simple;
	double result_complex = 0;
	int year = 1;

	do {
		result_simple = deposit_per_year * year * perc_simple;
		result_complex = (result_complex + deposit_per_year) * perc_complex;
		year++;
	} while(result_simple > result_complex);

	printf(	"result with simple percent: %.2lf\n"
			"result with complex percent: %.2lf\n"
			"year: %d\n",
			result_simple, result_complex, year);
}
