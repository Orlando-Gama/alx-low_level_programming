#include <stdio.h>

/**
  * main - prints the first 98 fibonacci numbers
  * starting with 1 and 2
  * separated by a comma followed by a space
  * Return: Always 0.
  */
int main(void)
{
	int i, j, k;

	i = 1;
	j = 2;

	printf("%d, %d", i, j);

	for (int n = 3; n <= 98; n++)
	{
		k = i + j;
		i = j;
		j = k;
		printf(", %d", k);
	}

	printf("\n");
	return (0);
}

