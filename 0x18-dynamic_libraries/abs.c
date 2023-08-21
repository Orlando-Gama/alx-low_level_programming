#include <stdio.h>
#include <string.h>
/**
* _abs - returns absolute value of an integer
* @n: integer you want the absolute value of
* Return: Returns the absolute value of n
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
