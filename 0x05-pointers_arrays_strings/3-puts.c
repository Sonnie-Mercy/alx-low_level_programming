#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: string to print
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])

	{
		printf(str[i]);
		i++;
	}
	printf('\n');
}
