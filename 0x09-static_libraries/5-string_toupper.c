#include "main.h"
/**
 * string_toupper - changes lowercase letters in a string to upercase
 * @str: string to change
 * Return: Pointer to changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
