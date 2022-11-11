#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest value of array
 * @max: largest value of array
 * Return: Pointer to the array
 * or NULL if min > max or maloc fails
 */
int *array_range(int min, int max)
{
	int *array, y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		array[y] = min++;

	return (array);
}
