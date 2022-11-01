#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to character to locate
 * @c: character in a string
 * Return: pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
