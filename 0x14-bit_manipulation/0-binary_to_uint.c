#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: unsigned int value
 */
unsigned int binary_to_uint(const char *b)

{
	unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
