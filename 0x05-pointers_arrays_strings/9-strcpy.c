#include "main.h"

/**
 * _strcpy - Copies string from source pointer to destination pointer
 * @dest: String pointer for destination
 * @src: String pointer for source
 * Return: dest - string pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, i = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for ( ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
