#include "main.h"

/**
 * _strstr - Checks if a substring is located in a string
 * @haystack: String pointer
 * @needle: substring to check for
 * Return: haystack - string pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int count2 = 0, count1, count_needle;

	while (*(haystack + count2) != 0)
	{
		count1 = 0;
		count_needle = 0;
		if (*needle == *(haystack + count2))
		{
			count1++;
			count_needle++;
			while (*(needle + count_needle) != 0)
			{
				if (*(needle + count_needle) == *(haystack + count2 + count_needle))
				{
					count1++;
				}
				count_needle++;
			}
			if (count1 == count_needle)
			{
				return (haystack + count2);
			}
		}
		count2++;
	}
	return (NULL);
}
