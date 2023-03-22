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
	long long int a = 1, b = 2, c;

	printf("%lld, %lld", a, b);

	for (r = 3; r <= n, r++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}

