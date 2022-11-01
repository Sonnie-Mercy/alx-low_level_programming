#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: pointer to where to copy to
 * @src: pointer to where to copy from
 * @n: length of src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
