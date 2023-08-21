#include <stdio.h>
#include <string.h>

/**
 * _strspn - Finds length of prefix substring
 * @s: String
 * @accept: Chars that are being matched
 * Return: Length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, x, z;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (len != x)
			break;
		for (z = 0; o[z] != '\0'; z++)
		{
			if (p[x] == o[z])
				len++;
		}
	}
	return (len);
}
