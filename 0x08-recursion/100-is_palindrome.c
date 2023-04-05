#include "main.h"

int check_pl(char *s, int i, int l);
int _strlen_fun(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pl(s, 0, _strlen_fun(s)));
}

/**
 * _strlen_fun - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_fun(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_fun(s + 1));
}

/**
 * check_pl - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pl(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pl(s, i + 1, l - 1));
}
