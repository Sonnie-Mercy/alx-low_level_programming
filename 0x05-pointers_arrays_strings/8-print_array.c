#include "main.h"

/**
 * print_array - prints an array of integers
 * @n: integer
 * @a: array pointer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		_putchar("%d", a[i]);
		if (n > 0)
		{
			_putchar(", ");
		}
	}
	_putchar("\n");
}
