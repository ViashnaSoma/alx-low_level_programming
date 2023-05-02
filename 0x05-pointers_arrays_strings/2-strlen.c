#include "main.h"

/**
* _strlen - returns the length of a string
*@s: char
*Return : length - length of string 
*/

int _strlen(char *s)
{
	int length = 0, check = 0;

	while (check == 0)
	{
		if (*(s + length) == 0)
		{
			check = 1;
		}
		else
		{
			length++;
		}
	}
	return (length);
}
