#include "main.h"

/**
 * is_prime_number - returns 1 if prime number 0 if not
 * @n: integer to check
 * Return: 1 if prime
 * 0 if not prime
 */
int is_prime_number(int n)
{
	if n <= 1
		return (0);

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return (0);
	return (1);
}
