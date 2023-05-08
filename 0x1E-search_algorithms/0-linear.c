#include "search_algos.h"
/**
 * linear_search - function that searches for value in array via linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t arr;

	if (!array)
		return (-1);

	for (arr = 0; arr < size; arr++)
	{
		printf("Value checked array[%ld] = [%d]\n", arr, array[arr]);
		if (array[arr] == value)
				return (arr);
	}
	return (-1);
}
