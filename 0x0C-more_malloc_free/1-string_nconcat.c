#include <stdlib.h>
#include "main.h"

/**
  * *string_nconcat - concatenates n bytes of a string to another string
  * @s1: string to append to
  * @s2: string to concatenate from
  * @n: number of bytes from s2 to concatenate to s1
  * Return: pointer to the resulting string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int q = 0, x = 0, pen1 = 0, pen2 = 0;

	while (s1 && s1[pen1])
		pen1++;
	while (s2 && s2[pen2])
		pen2++;
	if (n < pen2)
		s = malloc(sizeof(char) * (pen1 + n + 1));
	else
		s = malloc(sizeof(char) * (pen1 + pen2 + 1));
	if (!s)
		return (NULL);
	while (q < pen1)
	{
		s[q] = s1[q];
		q++;
	}
	while (n < pen2 && q < (pen1 + n))
		s[q++] = s2[x++];
	while (n >= pen2 && q < (pen1 + pen2))
		s[q++] = s2[x++];
	s[q] = '\0';
	return (s);
}

