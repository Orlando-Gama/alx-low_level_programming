#include <stdio.h>

/**
* _islower  - Prints if the chars are lowercase or not
* 0 for not lowercase, 1 for lowercase
* @c: letter being tested for case
* Return: 0 if not lowercase, 1 if lowercase
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
