#include "main.h"
/**
  * print_chessboard - Entry point
  * @a: array
  * Return: Always 0 (Success)
  */
void print_chessboard(char (*a)[8])
{
	int u;
	int x;

	for (u = 0; u < 8; u++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[u][x]);
		_putchar('\n');
	}
}
