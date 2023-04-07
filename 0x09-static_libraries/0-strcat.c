#include "main.h"

/**
  *_strcat - Concatenates two strings
  *@dest: Pointer to the destination string
  *@src: Pointer to the source string
  *
  *Description:
  *This function concatenates the string pointed to by src to the end of the
  *string pointed to by dest. The resulting concatenated string is stored in
  *the memory pointed to by dest. It is assumed that dest has enough space to
  *accommodate the concatenated string.
  *
  *Return:
  *Pointer to the destination string (i.e., dest).
  */
char *_strcat(char *dest, char *src)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}
	dest[k] = '\0';
	return (dest);
}

