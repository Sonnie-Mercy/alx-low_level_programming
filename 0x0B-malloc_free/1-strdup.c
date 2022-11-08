#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated mem space
 * @str: string to be copied
 * Return: NULL is stl==null or insufficient mem
 * function to pointer on success
 */
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
