#include "main.h"
#include <stdlib.h>
/**
  * argstostr - main Entry
  * @ac: Number of command-line arguments.
  * @av: Array of strings representing command-line arguments.
  *
  * Return: 0 (indicating successful exit).
  */
char *argstostr(int ac, char **av)
{
	int t, p, r = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (p = 0; av[t][p]; p++)
			j++;
	}
	j += ac;
	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (t = 0; t < ac; t++)
	{
		for (p = 0; av[t][p]; p++)
		{
			str[r] = av[t][p];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

