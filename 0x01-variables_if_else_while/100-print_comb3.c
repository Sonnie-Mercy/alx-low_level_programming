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
				if ((i != '8') || (j != '9'))
				{
					putchar (44);
					putchar (' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
