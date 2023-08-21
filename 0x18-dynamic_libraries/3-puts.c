#include <stdio.h>
#include <string.h>

/**
* _puts - this prints string followed by new line
* @str: the string which is being printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
