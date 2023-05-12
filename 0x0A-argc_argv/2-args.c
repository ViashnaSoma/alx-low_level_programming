#include <stdio.h>
#include <stdlib.h>

/**
* main - prints arguments passed
* @argc: Number of arguments
* @argv: Array of pointers for arguments
* Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
