#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * If min > mix, returns NULL.
 * If malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *pArray;
	int i;

	if (min > max)
		return (NULL);

	pArray = malloc(sizeof(*pArray) * ((max - min) + 1));

	if (pArray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		pArray[i] = min;

	return (pArray);
}
