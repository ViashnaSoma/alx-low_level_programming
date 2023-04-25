#include "main.h"
/**
* main - prints word -putchar
* Return: 0 for success
*/
int main(void)
{
	char display[];

	int i;
	
	for (i = 1; i <= 8; i++)
	{
		_putchar(display[i]);
	}
	_putchar('/n');
	return (0);
}
