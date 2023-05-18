#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenates two strings
* @s1: Pointer to first string
* @s2: Pointer to second string
* @n: number of characters to copy over from s2
* Return: mem for success or NULL for failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int lens1 = 0, lens2 = 0, len = 0, count, extra;
	char *strcat;
	
	while (s1 != 0)
	{
		lens1++;
		len++;
	}
	while (s2 != 0)
	{
		lens2++;
		len++;
	}
	if (n > lens2)
	{
		strcat = malloc((len + 1) * sizeof(char));
		extra = lens2;
	}
	else
	{
		strcat = malloc((lens1 + n + 1) * sizeof(char));
		extra = n;
	}
	if (strcat == 0)
	{
		return (NULL);
	}
	for (count = 0; count < lens1; count++)
	{
		strcat[count] = s1[count];
	}
	for (count = 0; count < extra; count++)
	{
		strcat[count + lens1] = s2[count];
	}
	return (strcat);
}
