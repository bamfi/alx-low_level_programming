#include "main.h"

/**
 * factorial - returns the factorial of a given n.
 * @n:number to return factorial of
 *
 * Return: if n>0 factorial of n
 *  -1 if n<0
 *  1 if n == 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
