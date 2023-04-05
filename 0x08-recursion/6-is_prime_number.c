#include "main.h"

int find_prime(int n, int dv);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @dv: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int find_prime(int n, int dv)
{
	if (dv == 1)
		return (1);
	if (n % dv == 0 && dv > 0)
		return (0);
	return (find_prime(n, dv - 1));
}
