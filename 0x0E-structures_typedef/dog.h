#ifndef DOG
#define DOG dog.h

/**
* struct dog - stores characteristics of a dog
* @name: string for name
* @age: age of dog
* @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
