#include <stdio.h>

void main(void)
{
	int num;
	int arr_even[20];
	int arr_odd[20];
	int count_even = 0;
	int count_odd = 0;
	int i;
	int sum_even = 0;
	int sum_odd = 0;
	float average_even;
	float average_odd;

	printf("enter int numbers (0 for exit):\n");
	
	while(scanf("%d", &num)) {
		if(num == 0)
			break;
		if(num % 2 == 0) {
			arr_even[count_even] = num;
			count_even++;
		}
		else {
			arr_odd[count_odd] = num;
			count_odd++;
		}
	}
	for(i = 0; i < count_even; i++) {
		sum_even += arr_even[i];
	}
	for(i = 0; i < count_odd; i++) {
		sum_odd += arr_odd[i];
	}
	if(count_even > 0)
		average_even = (float) sum_even / count_even;
	if(count_odd > 0)
		average_odd = (float) sum_odd / count_odd;
	
	printf("amount of even: %d\n"
		   "average of even: %.2f\n"
		   "amount of odd: %d\n"
		   "average of odd: %.2f\n",
		   count_even, average_even, count_odd, average_odd);
}
