#include <stdio.h>
/**
 * main - program that prints numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
			if (i < j)
			{
				putchar ('0' + i);
				putchar ('0' + j);
				putchar (44);
				putchar (' ');
			}
	}
	return (0);
}
