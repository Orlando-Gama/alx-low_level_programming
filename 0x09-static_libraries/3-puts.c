#include "main.h"

/**
  * _puts - Prints a string followed by a newline
  * @str: Pointer to the string to be printed
  *
  * Description:
  * This function prints the characters of the string pointed to by str
  * followed by a newline character, using the standard output (stdout).
  * Return:
  * void
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:
  *This is the entry point of the program. It calls the _puts function
  *to print a string followed by a newline.
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

