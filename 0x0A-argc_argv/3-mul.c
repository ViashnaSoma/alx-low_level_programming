#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplication of two numbers
* @argc: Number of arguments
* @argv: Array of pointers for arguments
* Return: 0 for success
*/

int main(int argc, char* argv[])
{
	int mult;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = stoi(argv[1]) * stoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
