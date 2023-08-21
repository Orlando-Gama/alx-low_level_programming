#include <stdio.h>
#include <string.h>

/**
 * _isdigit - returns char if digit or not
 * @c: char being tested
 * Return: 1 for a digit, 0 for not a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
