#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: array to allocate memory for
 * @size: bytes of memory
 * Return: pointer to allocated memory
 * or NULL if it fails or the memory is zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *w;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	w = mem;

	for (y = 0; y < (size * nmemb); y++)
		w[y] = '\0';

	return (mem);
}
