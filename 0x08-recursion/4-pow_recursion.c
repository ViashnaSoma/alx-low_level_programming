#include "main.h"

/**
* _pow_recursion - returns the value of int raised to exponent
* @x: base
* @y: exponent
* Return: -1 if y < 0 or value of x pow y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
