#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	for (s = 1; s <= 100; s++)
	{
		if (s % 3 == 0 && s % 5 != 0)
		{
			printf(" Fizz");
		} else if (s % 5 == 0 && s % 3 != 0)
		{
			printf(" Buzz");
		} else if (s % 3 == 0 && s % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (s == 1)
		{
			printf("%d", s);
		} else
		{
			printf(" %d", s);
		}
	}
	printf("\n");

	return (0);
}
