#include "search_algos.h"
/**
 * interpolation_search - searches using interpolation search algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: 1st index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, p;

	if (!array)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		if (l == h)
		{
			if (array[l] == value)
				return (l);
			return (-1);
		}

		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}
		if (array[p] == value)
			return (p);

		else if (array[p] < value)
			l = p - 1;
		else
			h = p + 1;
	}
	return (-1);
}
