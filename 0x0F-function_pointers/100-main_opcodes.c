#include <stdio.h>
#include <stdlib.h>

/**
  * print_opcodes - program that prints the opcodes
  * of its own main function.
  * @a: address of the main function
  * @n: number of bytes to print
  *
  * Return: nothing.
  */
void print_opcodes(char *addr, int size)
{
	int q;

	for (q = 0; q < size; q++)
	{
		printf("%02x", addr[q] & 0xff);
		if (q != size - 1)
			printf(" ");
	}
	printf("\n");
}

/**
  * main - prints the opcodes of its own main function
  * @argc: integer
  * @argv: character
  * Return: always 0.
  */
int main(int argc, char **argv)
{
	int size;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	size = atoi(argv[1]);
	if (size <= 0)
	{
		printf("Error\n");
		return (2);
	}
	addr = (char *)main;
	print_opcodes(addr, size);
	return (0);
}

