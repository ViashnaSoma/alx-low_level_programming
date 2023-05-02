#include "main.h"

/**
* rev_string - reverses a string
* @s: Pointer for string
* Return: no return value
*/

void rev_string(char *s)
{
	int length = 0, length2, count = 0;
	char store;
	
	while (*(s +length) != 0)
	{
		length++;
	}
	length2 = length;
	length--;
	while (count < length2 / 2)
	{
		store = *(s + length);
		*(s + length) = *(s + count);
		*(s + count) = store;
		length--;
		count++;
	}
}
