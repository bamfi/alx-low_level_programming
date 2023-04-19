#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of  operations.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
char *op;
if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
op = argv[2];
if (get_op_func(op) == NULL || op[1] != '\0')
{
	printf("Error\n");
	exit(99);
}

if ((*op == '/' && (atoi(argv[3])) == 0) ||
(*op == '%' && (atoi(argv[3])) == 0))
{
	printf("Error\n");
	exit(100);
}
printf("%d\n", get_op_func(op)((atoi(argv[1])), (atoi(argv[3]))));
return (0);
}
