#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rs;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;
while (s1 && s1[l1])
	l1++;
while (s2 && s2[l2])
	l2++;

if (n < l2)
	rs = malloc(sizeof(char) * (l1 + n + 1));
else
	rs = malloc(sizeof(char) * (l1 + l2 + 1));

if (!rs)
	return (NULL);

while (i < l1)
{
	rs[i] = s1[i];
	i++;
}

while (n < l2 && i < (l1 + n))
	rs[i++] = s2[j++];

while (n >= l2 && i < (l1 + l2))
	rs[i++] = s2[j++];

rs[i] = '\0';

return (rs);
}
