#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @a: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
