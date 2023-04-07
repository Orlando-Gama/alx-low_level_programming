#include "main.h"

/**
  * _atoi - convert a string into an integer.
  * @s: the string to use.
  * Return: integer.
  */
int _atoi(char *s)
{
	int sign = 1, q = 0;
	unsigned int res = 0;

	while (!(s[q] <= '9' && s[q] >= '0') && s[q] != '\0')
	{
		if (s[q] == '-')
			sign *= -1;
		q++;
	}
	while (s[q] <= '9' && (s[q] >= '0' && s[q] != '\0'))
	{
		res = (res * 10) + (s[q] - '0');
		q++;
	}
	res *= sign;
	return (res);
}

