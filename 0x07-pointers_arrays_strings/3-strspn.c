#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * @s: String pointer for string
 * @accept: chars to accept
 * Return: int - substring prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count2, count1 = 0;

	while (*(accept + count1) != 0)
	{
		count2 = 0;
		while (*(s + count2) != 0)
		{
			if (*(s + count2) == *(accept + count1))
			{
				return (count2 + 1);
			}
			count2++;
		}
		count1++;
	}
	return (0);
}
