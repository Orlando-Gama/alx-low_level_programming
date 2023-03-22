#include <stdio.h>

/**
  * main - prints the first 98 fibonacci numbers
  * starting with 1 and 2
  * separated by a comma followed by a space
  * Return: Always 0.
  */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%lu, %lu", a, b);

	for (i = 0; i <= 96; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}

