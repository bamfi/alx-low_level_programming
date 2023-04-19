#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Prints the result of  operations.
 * @argc: The number of arguments .
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*ope)(int, int);
if (argc != 4)
{
printf("Error found\n");
exit(98);
}
ope = get_op_func(argv[2]);
if (!ope)
{
printf("Error found\n");
exit(100);
}
printf("%d\n", ope(atoi(argv[1]), atoi(argv[3])));
return (0);
}

