#include <stdio.h>

/**
* *_strncat - this concatenates 2 strings
* @dest: target string
* @src: what is added
* @n: how much of src is added to dest
* Return: Returns the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	for (p = 0; dest[p] != '\0'; p++)
		;
	for (q = 0; src[q] != '\0' && q < n; q++)
	{
		dest[p + q] = src[q];
	}
	dest[p + q] = '\0';
	return (dest);
}
