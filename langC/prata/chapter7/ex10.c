#include <stdio.h>

void	main(void)
{
	const int INCOME1 = 17850;
	const int INCOME2 = 23900;
	const int INCOME3 = 29750;
	const int INCOME4 = 14875;
	const float TAX1 = 0.15;
	const float TAX2 = 0.28;
	int cat;
	double income;
	double tax;

	printf("choose your category (1-4):\n");
	scanf("%d", &cat);
	while (cat > 0 && cat < 5)
	{
		printf("enter your income:\n");
		scanf("%lf", &income);
		if (cat == 1)
		{
			if (income <= INCOME1)
				tax = income * TAX1;
			else
				tax = INCOME1 * TAX1 + (income - INCOME1) * TAX2;
		}
		else if (cat == 2)
		{
			if (income <= INCOME2)
				tax = income * TAX1;
			else
				tax = INCOME2 * TAX1 + (income - INCOME2) * TAX2;
		}
		else if (cat == 3)
		{
			if (income <= INCOME3)
				tax = income * TAX1;
			else
				tax = INCOME3 * TAX1 + (income - INCOME3) * TAX2;
		}
		else if (cat == 4)
		{
			if (income <= INCOME4)
				tax = income * TAX1;
			else
				tax = INCOME4 * TAX1 + (income - INCOME4) * TAX2;
		}
		printf("your tax is $%.2lf\n", tax);
		printf("choose your category (1-4):\n");
		scanf("%d", &cat);
	}
}
