#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion, followed by a new line
 * @s: Pointer for string
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
