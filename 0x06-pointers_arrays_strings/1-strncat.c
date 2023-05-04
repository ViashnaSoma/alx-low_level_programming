#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: Pointer for string
* @src: Pointer for string
* @n: number of characters to append from src
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int countsrc = 0, countdest = 0, i = 0;
	
	while (*(src + countsrc) != 0)
	{
		countsrc++;
	}
	while (*(dest + countdest) != 0)
	{
		countdest++;
	}
	while (i <= n)
	{
		*(dest + countdest) = *(src +i);
		countdest++;
		i++;
	}
	*(dest + countdest) = 0;
	return (dest);
}
