#include <stdio.h>

void main(void)
{
	int min, max;
	int i;
	int sum = 0;

	printf("enter min and max: ");
	scanf("%d %d", &min, &max);
	
	while(max > min) {
		for(i = min; i <= max; i++) {
			sum += i * i;
		}
		printf("sum of sequence of sqr from %d to %d is %d\n", min, max, sum);
		sum = 0;
		printf("enter min and max: ");
		scanf("%d %d", &min, &max);
	}
	printf("the end of program\n");
}
