#include "main.h"

/**
* main - checks for uppercase character
*@c is a character
* Return : 0 for lowercase and 1 for uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
