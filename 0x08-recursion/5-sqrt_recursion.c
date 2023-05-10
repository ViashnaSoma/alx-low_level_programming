#include "main.h"

/**
 * _pow - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int _pow(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
		{
			return (b);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _pow(a, b + 1));
}

/**
* _sqrt_recursion - returns natural square root using recursion
* @n: integer
* Return: natural square root or -1 if not found
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_pow(n, 2));
}
	
