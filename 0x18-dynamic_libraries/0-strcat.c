#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: string to concatenate to
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
