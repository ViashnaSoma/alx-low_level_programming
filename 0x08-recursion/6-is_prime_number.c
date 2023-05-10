#include "main.h"
/**
 * _modulus - Checks if number is prime
 * @n: integer
 * @fact: factor of number
 * Return: 1 if prime or 0 if not
 */

int _modulus(int n, int fact)
{
	if (n % fact == 0 && fact != n)
	{
		return (0);
	}
	if (fact == n)
	{
		return (1);
	}
	return (0 + _modulus(n, fact + 1));
}

/**
* is_prime_number - determines if input is a prime number
* @n: integer
* Return: 1 if prime number or 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (0);
	}
	else
	{
		return (_modulus(n, 2));
	}
}
