#include <stdio.h>

void main(void)
{
	const char STOP = '#';
	char ch;
	int count = 0;

	printf("enter any symbols:\n");
	while((ch = getchar()) != STOP) {
		count++;
		if((count % 8) == 0)
			printf("\n");
		if(ch != '\n')
			printf("%c: %3d ", ch, ch);
	}
}
