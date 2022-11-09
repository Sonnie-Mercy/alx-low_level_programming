#include "main.h"
/**
 * _strcmp -compares two strings
 * @s1: pointer to first string to compare
 * @s2: pointer to second string to compare
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
