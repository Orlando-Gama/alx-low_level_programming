#include <stdio.h>
#include <string.h>

/**
* *_strcat - this concatenates 2 strings
* @dest: target string
* @src: What is being added
* Return: Returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int h, j;

	for (h = 0; dest[h] != '\0'; h++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[h + j] = src[j];
	}
	dest[h + j] = '\0';

	return (dest);
}
