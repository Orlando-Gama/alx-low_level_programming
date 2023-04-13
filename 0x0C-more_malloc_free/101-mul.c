#include <stdio.h>
#include <stdlib.h>

/**
  * _strlen - returns the length of a string
  * @s: string to evaluate
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * _isdigit - checks if a character is a digit
  * @c: character to check
  * Return: 1 if c is a digit, 0 otherwise
  */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
  * errors - handles errors for main function
  *
  * This function prints an error message and exits with a status code of 98.
  */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
  * main - multiplies two positive numbers
  * @argc: number of arguments.
  * @argv: array of arguments
  * Return: always 0 (Success)
  */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	if (argc != 3)
		errors();
	s1 = argv[1], s2 = argv[2];

	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2;
	result = malloc(len * sizeof(int));
	if (result == NULL)
		errors();
	for (i = 0; i < len; i++)
		result[i] = 0;
	for (len1--; len1 >= 0; len1--)
	{
		if (!_isdigit(s1[len1]))
			errors();
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			if (!_isdigit(s2[len2]))
				errors();
			digit2 = s2[len2] - '0';
			result[len1 + len2 + 1] += digit1 * digit2 + carry;
			carry = result[len1 + len2 + 1] / 10;
			result[len1 + len2 + 1] %= 10;
		}
		if (carry)
			result[len1 + len2 + 1] += carry;
	}
	if (result[0] == 0)
		a = 1;
	for (; a < len; a++)
		printf("%d", result[a]);
	printf("\n");
	free(result);
	return (0);
}


