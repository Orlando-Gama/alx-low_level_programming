#include <stdio.h>
#include <string.h>

/**
* _abs - Returns absolute value of an int
* @n: The int you want the absolute value of
* Return: returns absolute value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return ((n * -1));
	}
	return (0);
}
