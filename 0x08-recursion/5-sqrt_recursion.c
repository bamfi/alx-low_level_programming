#include "main.h"
int find_sqrt_rec(int n, int rt);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_rec(n, 0));
}

/**
 * find_sqrt_rec - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @rt: iterator
 *
 * Return: the resulting square root
 */
int find_sqrt_rec(int n, int rt)
{
	if (rt * rt > n)
		return (-1);
	if (rt * rt == n)
		return (rt);
	return (find_sqrt_rec(n, rt + 1));
}
