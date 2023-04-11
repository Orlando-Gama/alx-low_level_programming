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
	int **mee;
	int m, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		mee[m] = malloc(sizeof(int) * width);
		if (mee[m] == NULL)
		{
			for (; m >= 0; m--)
				free(mee[m]);
			free(mee);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (k = 0; k < width; k++)
			mee[m][k] = 0;
	}
	return (mee);
}

