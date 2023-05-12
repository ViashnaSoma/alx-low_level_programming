#include <stdlib.h>
#include <stdio.h>

/**
* main - prints addition of positive numbers
* @argc: Number of arguments
* @argv: array of pointers for arguments
* Return: 0 for success
*/

int main(int argc, char* argv[])
{
	int i, sum = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (argv[i] > "0")
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
