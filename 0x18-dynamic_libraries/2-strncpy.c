#include <stdio.h>
#include <string.h>

/**
* *_strncpy - Copies src to dest
* @dest: Destination
* @src: source being copied
* @n: Amount of info to copy
* Return: always dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
