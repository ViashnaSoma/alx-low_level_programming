#include "main.h"

/**
* _strlen_recursion - returns the length of string
* @s: Pointer for string
* Return: str_len - length of string
*/

int _strlen_recursion(char *s)
{
	int str_len = 0;
	
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		str_len++;
	}
	return(str_len);
}
