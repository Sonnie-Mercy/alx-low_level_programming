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
	size_t previous;
	size_t current;
	size_t jump;
	size_t min;
	size_t i;

	jump = sqrt(size);
	previous = 0;
	current = jump;

	if (!array)
		return (-1);

	while (current < size && array[current] <= value)
	{
		printf("Value checked array [%lu] = [%d]\n", current, array[current]);

		if (array[current] == value)
			return (current);

		previous = current;
		current += jump;
	}

	min = (previous < size) ? previous : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", previous, min);

	for (i = previous; i <= min; i++)
	{
		printf("Value checked array [%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
