#include "main.h"

/**
  * print_rev - imprime en reversa
  * @h: string
  * Return: 0
  */
void print_rev(char *h)
{
	int orlando = 0;
	int o;

	while (*h != '\0')
	{
		orlando++;

		h++;
	}

	h--;

	for (o = orlando; o > 0; o--)
	{
		_putchar(*h);

		h--;
	}

	_putchar('\n');
}
