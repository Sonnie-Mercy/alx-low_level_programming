#include <stdio.h>

/**
 * main - prints possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		if n != 9
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	else
	{
		putchar(n + '0');
	}
	return (0);
}
