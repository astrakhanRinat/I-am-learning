#include <stdio.h>
#include <string.h>

void main(void)
{
	char word[20];
	char rev_word[20];
	int i;
	int j = 0;

	printf("enter any word: ");
	scanf("%s", word);

	int word_length = strlen(word);

	for(i = word_length - 1; i >= 0; i--) {
		rev_word[j] = word[i];
		j++;
	}
	printf("%s\n", rev_word);
}
