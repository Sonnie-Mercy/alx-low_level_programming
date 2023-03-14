#include "main.h"

/**
 * times_table - prints the 9 by 9 mult table
 */
void times_table(void)
{
	int mult1, mult2, product;

	for (mult1 = 0; mult1 <= 9; mult1++)
	{
		for (mult2 = 0; mult2 <= 9; mult2++)
		{
			product = mult1 * mult2;
			if (mult2 == 0)
			{
				_putchar(product + '0');
			}
			if
			{
				(product < 10 && mult2 != 0)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
			} else if (product > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10 + '0');
				_putchar((product % 10 + '0');
			}
		}
	_putchar('\n');
}
