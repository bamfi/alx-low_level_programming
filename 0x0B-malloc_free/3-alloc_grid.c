#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -Returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arraj
 */
int **alloc_grid(int width, int height)
{
	int **da;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	da = malloc(sizeof(int *) * height);

	if (da == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		da[i] = malloc(sizeof(int) * width);

		if (da[i] == NULL)
		{
			for (; i >= 0; i--)
				free(da[i]);

			free(da);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			da[i][j] = 0;
	}

	return (da);
}
