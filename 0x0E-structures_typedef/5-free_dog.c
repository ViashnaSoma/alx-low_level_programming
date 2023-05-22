#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dog structure
* @d: pointer to dog structure
* Return: no return value
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
