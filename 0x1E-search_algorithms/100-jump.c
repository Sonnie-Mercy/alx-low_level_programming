#include "search_algos.h"

/**
 * jump_search - uses jump search algorithm
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if no array or no value, else 1st index of array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, le, ri;
	size_t i;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	le = 0;
	ri = 0;

	while (ri < size && array[ri] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", ri, array[ri]);
		le = ri;
		ri += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", le, ri);

	for (i = le; i <= ri; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
