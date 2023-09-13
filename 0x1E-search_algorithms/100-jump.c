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
	if (!array || size == 0)
		return (-1);

	size_t jump = sqrt(size);
	size_t le = 0;
	size_t ri = 0;
	int i;

	while (ri < size && array[ri] < value)
	{
		le = ri;
		ri += jump;
		if (ri >= (int)size)
			ri = size - 1;
		printf("Value checked array[%d] = [%d]\n", ri, array[ri]);
	}
	printf("Value found between indexes [%d] and [%d]\n", le, ri);

	for (i = le; i <= ri; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
