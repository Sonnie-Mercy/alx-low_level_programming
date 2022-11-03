#include "main.h"

/**
 * _pow_recursion - returns the value of x to power y
 * @x: value to raise
 * @y: power
 * Return: The value of x to power y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
