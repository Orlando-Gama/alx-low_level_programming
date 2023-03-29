#include "main.h"
#include <stdio.h>

/**
  *main - check the code
  *Return: Always 0.
  */
int main(void)
{
	char s1[98];
	char *ptr;
	int q;

	for (q = 0; q < 98 - 1; q++)
	{
		s1[q] = '*';
	}

	s1[q] = '\0';

	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);

	for (q = 0; q < 98; q++)
	{
		if (q % 10)
		{
		printf(" ");
		}
		if (!(q % 10) && q)
		{
			printf("\n");
		}
		printf("0x%02x", s1[q]);
	}
	printf("\n");
	return (0);
}

