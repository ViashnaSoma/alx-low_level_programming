#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	dog->name = malloc(namelen * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(ownerlen * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= ownerlen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
