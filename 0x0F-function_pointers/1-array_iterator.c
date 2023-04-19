#include "function_pointers.h"
/**
 * array_iterator - exe a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to the function you re using
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
