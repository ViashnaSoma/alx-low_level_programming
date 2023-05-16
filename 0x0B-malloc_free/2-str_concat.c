#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: Pointer for string 1
* @s2: Pointer for string 2
* Return: scat for success, NULL for failure
*/

char *str_concat(char *s1, char *s2)
{
	char *scat;
	int lens1 = 0, lens2 = 0, len = 0, count = 0;
	
	if (!s1)
	{
		lens1 = 0;
	}
	else
	{
		while (s1[lens1] != 0)
		{
			lens1++;
			len++;
		}
	}
	if (!s2)
	{
		lens2 = 0;
	}
	else
	{
		while (s2[lens2] != 0)
		{
			lens2++;
			len++;
		}
	}
	scat = malloc((len + 1) * sizeof(char));
	if (!scat)
	{
		return (NULL);
	}
	while (count < lens1)
	{
		scat[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < lens2)
	{
		scat[count + lens1] = s2[count];
		count++;
	}
	return (scat);
}
