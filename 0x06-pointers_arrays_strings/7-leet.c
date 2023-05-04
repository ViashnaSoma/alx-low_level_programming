#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: String pointer
 * Return: S - Encoded string
 */

char *leet(char *s)
{
	int len = 0, i;
	char encode[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (*(s + len) != 0)
	{
		for (i = 0; i < 10; i++)
		{
			if (*(s + len) == encode[i])
			{
				*(s + len) = num[i] + 48;
			}
		}
		len++;
	}
	return (s);
}
