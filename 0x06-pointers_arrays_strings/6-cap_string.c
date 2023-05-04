#include "main.h"

/**
 * cap_string - Captalizes all words in a string
 * @s: String pointer
 * Return: s with uppercase letters
 */

char *cap_string(char *s)
{
	int len = 0, count;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + len) >= 97 && *(s + len) <= 122)
	{
		*(s + len) -= 32;
	}
	while (*(s + len) != 0)
	{
		for (count = 0; count < 13; count++)
		{
			if (*(s + len) == sep_words[count])
			{
				if ((*(s + (len + 1)) >= 97) && (*(s + (len + 1)) <= 122))
				{
					*(s + (len + 1)) = *(s + (len + 1)) - 32;
				}
				break;
			}
		}
		len++;
	}
	return (s);
}
