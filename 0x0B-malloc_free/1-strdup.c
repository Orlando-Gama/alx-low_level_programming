#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - duplicate to new memory space location
  * @str: char
  * Return: Always zero
  */
char *_strdup(char *str)
{
	char *aaa;

	int q, p = 0;

	if (str == NULL)
		return (NULL);
	q = 0;
	while (str[q] != '\0')
		q++;
	aaa = malloc(sizeof(char) * (q + 1));
	if (aaa == NULL)
		return (NULL);
	for (p = 0; str[p]; p++)
		aaa[p] = str[p];
	return (aaa);
}

