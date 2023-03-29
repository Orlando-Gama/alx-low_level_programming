#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int r, e;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (r = 0; s[r] != '\0'; r++)
	{
		if (r == 0 && s[r] >= 'a' && s[r] <= 'z')
			s[r] -= 32;

		for (e = 0; e < 13; e++)
		{
			if (s[r] == spe[e])
			{
				if (s[r + 1] >= 'a' && s[r + 1] <= 'z')
				{
					s[r + 1] -= 32;
				}
			}
		}
	}
}

