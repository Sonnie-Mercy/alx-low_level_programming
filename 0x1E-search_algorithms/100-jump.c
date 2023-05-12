#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array using jump search algo
 * @array: pointer to first element to search in
 * @size: number of elements in the array
 * @value: value to search
 * Return: -1 or first index where the array is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t previous;
	size_t current;

	jump = sqrt(size);
	previous = 0;
	current = jump;

	if (!array || size == 0)
		return (-1);

	printf("Value checked array [%lu] = [%d]\n", previous, array[previous]);
	while (current < size && array[current] < value)
	{
		printf("Value checked array [%lu] = [%d]\n", current, array[current]);
		previous = current;
		current += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", previous, current);

	while (previous < current && previous < size)
	{
		printf("Value checked array [%lu] = [%d]\n", previous, array[previous]);

		if (array[previous] == value)
			return (previous - 1);
		previous++;
	}
	return (-1);
}
