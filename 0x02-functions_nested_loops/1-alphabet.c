#include "main.h"

/**
* main - prints the word _putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char display[] = "_putchar";

	int i, message_len;

	message_len = sizeof(message) / sizeof(message[0]);
	for (i = 0; i < message_len - 1; i++)
	{
		_putchar(display[i]);
	}
	_putchar('\n');
	return (0);
}
