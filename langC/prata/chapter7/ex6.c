#include <stdio.h>

void	main(void)
{
	char	ch;
	char	ch_prev;
	int		count;

	count = 0;
	printf("enter any symbols (# for exit):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch_prev == 'e' && ch == 'i')
			count++;
		ch_prev = ch;
	}
	printf("%d\n", count);
}
