#include "main.h"

/**
 * _isupper - Check if given char is an uppercase letter.
 * @c: Char to be tested
 *
 * Return: 1 if uppercase else 0 (False)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

