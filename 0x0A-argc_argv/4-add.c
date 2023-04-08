#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_nm - check string if it s a digit
* @str: array str
*
* Return: Always 0 (Success)
*/
int check_nm(char *str)
{
/*Declaring variables*/
	unsigned int count;


	count = 0;
	while (count < strlen(str)) /*count the string*/


	{
		if (!isdigit(str[count])) /*checking if str is digit*/
		{
			return (0);
		}


		count++;
}
return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	/*declare variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /* goes through the array*/
	{
		if (check_nm(argv[count]))

		{
			str_to_int = atoi(argv[count]); /* atoi  convert string to integer*/
			sum += str_to_int;
		}

		/* if one of the numbers contains symbols that aren t digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*it prints sum */

	return (0);
}
