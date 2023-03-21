#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int q;

	if (n <= 98)
	{
		for (q = n; q <= 98; q++)
		{
			printf("%d", q);
			if (q != 98)
				printtf(", ");
		}
	}
	else
	{
		for (q = n; q >= 98; i--)
		{
			printf("%d", q);
			if (q != 98)
				printf(", ");
		}
	}
	printf("\n");
}

