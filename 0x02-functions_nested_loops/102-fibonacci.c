#include <stdio.h>

/**
  * main - main block
  * Description: Find and print the first 98 fib numbers
  * starting with 1 and 2.
  * Numbers should be coma and space separated.
  * Return: 0
  */
int main(void)
{
	int r, n = 50;
	long a = 1, b = 2, c;

	printf("%ld, %ld", a, b);

	for (r = 3; r <= n; r++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}

