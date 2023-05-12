#include <stdlib.h>
#include <stdio.h>

/**
* main - prints name of file
* @argc: Number of arguments
* @argv: array of pointers for arguments
* Return: 0 for success
*/

int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
