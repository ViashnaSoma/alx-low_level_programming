#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* new_dog - stores info for new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: pointer to dog structure for true, else NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *space;

	space = malloc(sizeof(*space));
	if (space == NULL || !(age))
	{
		return (NULL);
	}
	space->name = name;
	space->age = age;
	space->owner = owner;
	return (space);
}
