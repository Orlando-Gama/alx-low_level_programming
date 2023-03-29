#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int t, u;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (t = 0; s[t] != '\0'; t++)
	{
		for (u = 0; u < 10; u++)
		{
			if (s[t] == a[u])
			{
				s[t] = b[u];
			}
		}
	}

	return (s);
}
