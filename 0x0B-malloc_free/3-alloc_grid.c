#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - nested loop to make grid
  *@width: width input
  * @height: height input
  * Return: pointer to 2 dim. array
  */
int **alloc_grid(int width, int height)
{
	int **bee;
	int m, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	bee = malloc(sizeof(int *) * height);
	if (bee == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		bee[m] = malloc(sizeof(int) * width);
		if (bee[m] == NULL)
		{
			for (; m >= 0; m--)
				free(bee[m]);
			free(bee);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (k = 0; k < width; k++)
			bee[m][k] = 0;
	}
	return (bee);
}

