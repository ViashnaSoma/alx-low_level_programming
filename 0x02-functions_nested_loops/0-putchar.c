#include "main.h"
/**
* main - prints word -putchar
* Return: 0 for success
*/
int main(void)
{
	char display[] = "_putchar";

	int i;
	
	for (i = 0; i <= 8; i++)
	{
		_putchar(display[i]);
	}
	_putchar('\n');
	return (0);
}
