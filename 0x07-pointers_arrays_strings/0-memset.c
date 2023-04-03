#include "main.h"
/**
  * _memset - fill a block of memory with a specific value
  * @m: starting address of memory to be filled
  * @f: the desired value
  * @n: number of bytes to be changed
  *
  * Return: changed array with a new value for n bytes
  */
char *_memset(char *m, char f, unsigned int n)
{
	int t = 0;

	for (; n > 0; t++)
	{
		m[t] = f;
		n--;
	}
	return (m);
}

