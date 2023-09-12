#include "search_algos.h"
/**
 * binary_search - searches for a value using binary search
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: value to return
 * Return: -1 if array is NULL or no value, else index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle;
	int i;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);
		
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
