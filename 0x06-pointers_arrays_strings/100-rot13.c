#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int n, d;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (s[n] == a[n])
			{
				s[n] = b[d];
				break;
			}
		}
	}

	return (s);
}
