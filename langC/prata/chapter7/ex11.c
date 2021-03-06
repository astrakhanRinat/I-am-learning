#include <stdio.h>

void	main(void)
{
	const float COST_A = 1.25;
	const float COST_B = 0.65;
	const float COST_C = 0.89;
	const float TAX1 = 3.5;
	const float TAX2 = 10.0;
	const float TAX3 = 8.0;
	const float TAX4 = 0.1;
	const float DISC = 0.05;
	int prod;
	float weight;
	float cost;
	float discount;
	float delivery;
	float cost_finish;
	float cost_a;
	float cost_b;
	float cost_c;

	cost_a = 0;
	cost_b = 0;
	cost_c = 0;
	discount = 0;
	printf("choose prod 1, 2 or 3 (4 for exit):\n");
	scanf("%d", &prod);
	while (prod != 4)
	{
		printf("enter weight:\n");
		scanf("%f", &weight);
		if (prod == 1)
			cost_a = weight * COST_A;
		else if (prod == 2)
			cost_b = weight * COST_B;
		else if (prod == 3)
			cost_c = weight * COST_C;
		printf("choose prod 1, 2 or 3 (4 for exit):\n");
		scanf("%d", &prod);
	}
	cost = cost_a + cost_b + cost_c;
	if (cost >= 100.0)
		discount = cost * DISC;
	if (weight <= 5)
		delivery = TAX1;
	else if (weight <= 20)
		delivery = TAX2;
	else
		delivery = TAX3 + (weight - 20) * TAX4;
	cost_finish = cost - discount + delivery;
	printf("prod 1 - cost of pound: $%.2f, weight: %.2f, cost: $%.2f\n",
			COST_A, cost_a / COST_A, cost_a);
	printf("prod 2 - cost of pound: $%.2f, weight: %.2f, cost: $%.2f\n",
			COST_B, cost_b / COST_B, cost_b);
	printf("prod 3 - cost of pound: $%.2f, weight: %.2f, cost: $%.2f\n",
			COST_C, cost_c / COST_C, cost_c);
	printf(	"cost: $%.2f\n"
			"discount: $%.2f\n"
			"delivery: $%.2f\n"
			"finish cost: $%.2f\n",
			cost, discount, delivery, cost_finish);
}
