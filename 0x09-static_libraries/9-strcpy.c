#include "main.h"

/**
  * char *_strcpy - a function that copies the string pointed to by src
  * @dest: copy to
  * @src: copy from
  * Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int y = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; y < a ; y++)
	{
		dest[y] = src[y];
	}
	dest[a] = '\0';
	return (dest);
}

