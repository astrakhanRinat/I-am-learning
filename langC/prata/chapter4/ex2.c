#include <stdio.h>
#include <string.h>

void main(void)
{
	char name[20];

	printf("enter your name:\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);

	int field_length = strlen(name) + 3;

	printf("%*s\n", field_length, name);
}

