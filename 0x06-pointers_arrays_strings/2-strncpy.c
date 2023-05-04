#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: String pointer for destination
 * @src: String pointer for source
 * @n: Number of characters to append from src
 * Return: dest - string pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for ( ; c < n; c++)
	{
		dest[c] = '\0';
	}

	return (dest);
}
