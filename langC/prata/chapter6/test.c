#include <stdio.h>

void main(void)
{
	char ch;
	scanf("%c", &ch);
	for (ch = '$'; ch != 'g'; scanf("%c", &ch))
		putchar(ch);
}
