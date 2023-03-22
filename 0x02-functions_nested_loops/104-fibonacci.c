#include <stdio.h>

/**
  * main - prints the first 98 fibonacci numbers
  * starting with 1 and 2
  * separated by a comma followed by a space
  * Return: Always 0.
  */
int main(void)
{
	int count = 0, a = 1, b = 2, c;

	printf("%d, %d, ", a, b);
	count += 2;
	while (count < 98)
	{
		c = a + b;
		printf("%d", c);
		if (count != 97)
		{
			printf(", ");
		}
		a = b;
		b = c;
		count++;
	}

	printf("\n");
	return (0);
}

