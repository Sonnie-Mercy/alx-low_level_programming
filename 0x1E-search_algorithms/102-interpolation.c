#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * using Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where the value is located, or -1 if not found or NULL array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%lu] = [%d]\n",
						low, array[low]);
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n",
					pos, array[pos]);
			return (pos);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%d] is out of range\n", *array);
	return (-1);
}
