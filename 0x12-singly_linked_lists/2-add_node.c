#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int l = 0;

while (str[len])
l++;

nw = malloc(sizeof(list_t));
if (!nw)
return (NULL);
nw->str = strdup(str);
nw->l = l;
nw->next = (*head);
(*head) = nw;
return (*head);
}
