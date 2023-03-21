#include "main.h"

/**
  * print_alphabet_x10 - prints alpha 10 times
  */
void print_alphabet_x10(void)
{
	char letter;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar('\n');
		}
	}
}

