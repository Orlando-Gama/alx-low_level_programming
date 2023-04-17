#include <stdio.h>
#define PRINT_FILE_NAME() printf("%s\n", __FILE__)

/**
  * main - prints the name o the file program
  * Return: Always zero
  */
int main(void)
{
	PRINT_FILE_NAME();
	return (0);
}

