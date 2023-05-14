#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * largest_prime - finds the largest prime
 * @num: the number
 * Return: largest prime
 */
long largest_prime(long num)
{
	long factor;

	while (num % 2 == 0)
	{
		factor = 2;
		num /= 2;
	}

	for (factor = 3; factor <= sqrt(num); factor += 2)
	{
		while (num % factor == 0)
		{
			num /= factor;
		}
	}

	if (num > 2)
		return (num);
	return (factor);
}
int main(void)
{
	long num = 612852475143;
	long largest_factor = largest_prime(num);

	printf("%ld\n", largest_factor);

	return (0);
}
