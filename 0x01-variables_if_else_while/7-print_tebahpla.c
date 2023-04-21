#include <stdio.h>

/**
* main - Prints the alphabet in lowercase letters in reverse
*
* Return: returns 0 for success
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
