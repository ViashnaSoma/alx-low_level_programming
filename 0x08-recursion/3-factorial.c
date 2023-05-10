#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: number to find factorial of
* Return: Factorial of number or -1 for error
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		 if(n <= 1) 
		 {
			 return 1;
		 }
		return (n * factorial(n - 1));
	}
}
