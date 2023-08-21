#include <stdio.h>
#include <string.h>

/**
* _isalpha - Returns 1 or 0
* Depending on if char is capitalized or not.
* @c: char that is looked at.
* Return: returns 1 if capital, 0 if not.
*/
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
