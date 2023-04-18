#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dogs
* @d: Pointer to free dog s info
*
* Return: void
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

