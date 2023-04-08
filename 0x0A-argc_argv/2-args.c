#include "main.h"
#include <stdio.h>

/**
  * main - prints all the args content
  * @argc: argumen count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
