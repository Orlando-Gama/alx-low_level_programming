#include "main.h"
/**
  * _memcpy - a function that copie memory location
  * @dest: memory where is kept
  * @src: memory where is copied
  * @k: number of bytes
  *
  * Return: copied memory with n bytes changed
  */
char *_memcpy(char *dest, char *src, unsigned int k)
{
	int j = 0;
	int d = k;

	for (; j < d; j++)
	{
		dest[j] = src[j];
		k--;
	}
	return (dest);
}
