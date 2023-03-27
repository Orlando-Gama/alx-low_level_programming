#include "main.h"

/**
  * puts2 - function should print only one character out of two
  * starting with the first one
  * @str: input
  * Return: print.
  */
void puts2(char *str)
{
	int omega = 0;
	int i = 0;
	char *y = str;
	int h;

	while (*y != '\0')
	{
		y++;
		omega++;
	}

	i = omega - 1;
	for (h = 0 ; h <= i ; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
