#include <stdio.h>

void main(void)
{
	const int amount_items = 8;
	double arr1[amount_items];
	double arr2[amount_items];
	int i = 0;
	double sum = 0;

	while(i < amount_items) {
		printf("enter %d double num: ", i + 1);
		scanf("%lf", &arr1[i]);
		sum += arr1[i];
		arr2[i] = sum;
		i++;
	}

	for(i = 0; i < amount_items; i++) {
		printf("%6.2lf ", arr1[i]);
	}
	printf("\n");
	
	for(i = 0; i < amount_items; i++) {
		printf("%6.2lf ", arr2[i]);
	}
	printf("\n");
}
