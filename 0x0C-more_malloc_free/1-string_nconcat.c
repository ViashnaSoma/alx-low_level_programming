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
	char *strcat;
	unsigned int lens1, lens2, count = 0, count2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lens1 = 0; s1[lens1] != 0; lens1++)
		;
	for (lens2 = 0; s2[lens2] != 0; lens2++)
		;
	if (lens2 > n)
	{
		lens2 = n;
	}
	strcat = malloc((lens1 + lens2) * sizeof(char) + 1);
	if (strcat != NULL)
	{
		while (lens1 > 0)
		{
			strcat[count] = s1[count];
			lens1--;
			count++;
		}
		while (lens2 > 0)
		{
			strcat[count] = s2[count2];
			lens2--;
			count2++;
			count++;
		}
		strcat[count] = 0;
		return (strcat);
	}
	free(strcat);
	return (NULL);
}
