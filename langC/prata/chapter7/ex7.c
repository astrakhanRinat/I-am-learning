#include <stdio.h>
#define HOURS_FEE_1 40
#define FEE_1_HOURS 10
#define FEE_2_HOURS_RATIO 1.5
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.05
#define SALARY_TAX_RATE_1 300
#define SALARY_TAX_RATE_2 450

void	main(void)
{
	int hours;
	float salary_with_tax;
	float salary_without_tax;
	float tax;
	const int SALARY_FEE_1 = HOURS_FEE_1 * FEE_1_HOURS;
	const float SALARY_1 = SALARY_TAX_RATE_1 - (SALARY_TAX_RATE_1 * TAX_RATE_1);
	const float SALARY_2 = (SALARY_TAX_RATE_2 - SALARY_TAX_RATE_1) -
						(SALARY_TAX_RATE_2 - SALARY_TAX_RATE_1) * TAX_RATE_2;

	printf("enter amount of hours worked during the week:\n");
	scanf("%d", &hours);
	if (hours > HOURS_FEE_1)
		salary_with_tax = 	SALARY_FEE_1 + (hours - HOURS_FEE_1) *
							FEE_1_HOURS * FEE_2_HOURS_RATIO;
	else
		salary_with_tax = hours * FEE_1_HOURS;
	if (salary_with_tax <= SALARY_TAX_RATE_1)
		salary_without_tax = salary_with_tax - (salary_with_tax * TAX_RATE_1);
	else if (salary_with_tax <= SALARY_TAX_RATE_2)
		salary_without_tax = 	SALARY_1 +
								(salary_with_tax - SALARY_TAX_RATE_1) -
								(salary_with_tax - SALARY_TAX_RATE_1) *
								TAX_RATE_2;
	else
		salary_without_tax = 	SALARY_1 + SALARY_2 +
								(salary_with_tax - SALARY_TAX_RATE_2) -
								(salary_with_tax - SALARY_TAX_RATE_2) *
								TAX_RATE_3;
	tax = salary_with_tax - salary_without_tax;
	printf("salary with tax: $%.2f\n", salary_with_tax);
	printf("tax: $%.2f\n", tax);
	printf("salary without tax: $%.2f\n", salary_without_tax);
}
