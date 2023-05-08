#include "main.h"

/**
 * _strpbrk - Checks for first occurence of byte
 * @s: String pointer for string
 * @accept: bytes to accept
 * Return: s - string pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int count2 = 0, count1;

	while (*(s + count2) != 0)
	{
		count1 = 0;
		while (*(accept + count1) != 0)
		{
			if (*(s + count2) == *(accept + count1))
			{
				return (s + count2);
			}
			count1++;
		}
		count2++;
	}
	return (NULL);
}
