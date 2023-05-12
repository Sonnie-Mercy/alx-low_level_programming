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
	if (!array)
		return (-1);
	size_t jump = sqrt(size);
	size_t previous = 0;
	size_t current = jump;

	while (current < size && array[current] <= value)
	{
		printf("Value checked array [%ld] = [%d]\n", current, array[current]);

		if (array[current] == value)
			return (current);

		previous = current;
		current += jump;
	}

	size_t min = (previous < size) ? previous : size - 1;
	size_t i = 0;

	printf("Value found between indexes [%ld] and [%ld]\n", previous, min);

	for (i = previous; i <= min; i++)
	{
		printf("Value checked array [%ld] = [%d]\n", i array[i]);
		return (i);
	}
	return (-1);
}
