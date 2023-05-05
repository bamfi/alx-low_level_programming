#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n:  number1
 * @m: number2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int crt;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crt = excl >> i;
		if (crt & 1)
			c++;
	}

	return (c);
}
