#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the number of arguments passed into the function
* @argc: Number of arguments
* @argv: array of pointers for arguments
* Return: 0 for success
*/

main(int argc, char* argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
