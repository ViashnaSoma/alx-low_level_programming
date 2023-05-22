#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* init_dog - adds information of dog
* @d: pointer to structure
* @name: dog name
* @age: age of dog
* @owner: owner of dog
* Return: No return value
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
