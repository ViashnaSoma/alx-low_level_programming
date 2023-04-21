#include <stdio.h>

/**
* main - Prints all single digit numbers using only putchar
*
* Return: 0 for success
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
