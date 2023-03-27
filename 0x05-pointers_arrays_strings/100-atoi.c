#include "main.h"


/**
  * _atoi - converts a string to an integer
  *@s: string to be converted
  * Return: the int converted from the string
*/
int _atoi(char *s)
{
	int q, d, g, len, f, digit;

	q = 0;
	d = 0;
	g = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')

		len++;

	while (q < len && f == 0)
	{
		if (s[q] == '-')
			++d;
		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';

			if (d % 2)
				digit = -digit;
			g = g * 10 + digit;

			f = 1;

			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			f = 0;
		}

			q++;
	}
	if (f == 0)

		return (0);

	return (g);
}

