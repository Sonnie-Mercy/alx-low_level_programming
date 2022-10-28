#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @end: string to concatenate to
 * Return: pointer to resulting string
 */
char *_strcat(char *end, char *src)
{
	int index = 0;
	int end_len = 0;

	while (end[index++])
		end_len++;
	for (index = 0; src[index]; index++)
		end[end_len++] = src[index];
	return (end);
}
