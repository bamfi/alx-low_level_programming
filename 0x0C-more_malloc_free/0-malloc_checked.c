#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -allocating memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointeur;

	pointeur = malloc(b);

	if (pointeur == NULL)
		exit(98);

	return (pointeur);
}
