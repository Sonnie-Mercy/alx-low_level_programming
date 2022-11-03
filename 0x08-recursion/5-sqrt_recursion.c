#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: number whose square root to return
 * Return: natural squareroot
 * or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
