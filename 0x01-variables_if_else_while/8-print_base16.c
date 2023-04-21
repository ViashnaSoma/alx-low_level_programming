#include <stdio.h>

/**
* main - Prints the numbers of base 16 in lowercase
* Return: Return 0 for success
*/
int main(void)
{
	char hex;
	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
