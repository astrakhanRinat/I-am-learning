#include <stdio.h>
	
void main(void)
{
	int ch;

	printf("\aEnter any number from 0 to 127: ___\b\b\b");
	scanf("%d", &ch);
	printf("Your char is %c\n", ch);
}
