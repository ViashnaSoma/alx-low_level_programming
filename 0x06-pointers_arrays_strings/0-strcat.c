#include "main.h"

/**
 * _strcat - Copies string from source
 * pointer and appends to destination pointer
 * @dest: String pointer for destination
 * @src: String pointer for source
 * Return: dest - string pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int len_d = 0, len_s = 0;

	while (*(dest + len_d) != 0)
	{
		len_d++;
	}
	while (*(src + len_s) != 0)
	{
		*(dest + len_d) = *(src + len_s);
		len_d++;
		len_s++;
	}
	*(dest + len_d) = 0;
	return (dest);
}
