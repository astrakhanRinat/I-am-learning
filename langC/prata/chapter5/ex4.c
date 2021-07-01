#include <stdio.h>

void main(void)
{
	const double SM_PER_INCH = 2.54;
	const int INCH_PER_FOOT = 12;
	double sm;

	printf("enter hight by sm: ");
	scanf("%lf", &sm);
	while (sm > 0) {
		double inch = sm / SM_PER_INCH;
		int foot = (int) inch / INCH_PER_FOOT;
		double rest = inch - foot * INCH_PER_FOOT;
		printf("%.1lf sm = %d foots, %.1lf inches\n", sm, foot, rest);
		printf("enter hight by sm (<=0 for exit): ");
		scanf("%lf", &sm);
	}
	printf("the work is done\n");
}
