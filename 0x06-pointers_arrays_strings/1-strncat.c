#include "main.h"

/**
 * _strncat - Appends n characters from src to dest
 * @dest: String pointer for destination
 * @src: String pointer for source
 * @n: Number of characters to append from src
 * Return: dest - string pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0, len_s = 0;

	while (*(dest + len_d) != 0)
	{
		len_d++;
	}
	while (*(src + len_s) != 0 && len_s < n)
	{
		*(dest + len_d) = *(src + len_s);
		len_d++;
		len_s++;
	}
	*(dest + len_d) = 0;
	return (dest);
}
