#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the mult of two args numbers
  * @argc: arguments count
  * @argv: argument vector
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int a1 = 0, a2 = 0;

	if (argc == 3)
	{
		a1 = atoi(argv[1]);
		a2 = atoi(argv[2]);
		printf("%d\n", a1 * a2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

