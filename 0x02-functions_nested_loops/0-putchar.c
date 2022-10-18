#include <stdio.h>
/**
 * main - Prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *dh = "_putchar";

	while (*dh)
	{
		_putchar(*dh);
		dh++;
	}
	_putchar('\n');

	return (0);
}
