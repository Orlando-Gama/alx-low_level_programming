#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - Copies str pointed by src including the terminating
 * null byte \0, to buffer pointed to by dest.
 * @dest: Buffer
 * @src: String that is being copied
 * Return: Dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cpyresult = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (cpyresult);
}
