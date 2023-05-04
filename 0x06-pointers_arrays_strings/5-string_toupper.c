#include "main.h"

/**
 * string_toupper - Capitlaises all lower case letters
 * @s: String pointer
 * Return: s - contains uppercase letters
 */

char *string_toupper(char *s)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		if (*(s + len) >= 97 && *(s + len) <= 122)
		{
			*(s + len) -= 32;
		}
		len++;
	}
	return (s);
}
