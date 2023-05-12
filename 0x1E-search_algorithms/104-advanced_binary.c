#include "search_algos.h"
/**
 * binary_rec - searches recursively
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of the subarray
 * @right: rightmost index of the subarray
 * @value: value to search for
 * Return: index of the first occurrence of value, or -1 if not found
 */
int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			return (binary_rec(array, left, mid, value));
		}
		else if (array[mid] < value)
			return (binary_rec(array, mid + 1, right, value));
		else
			return (binary_rec(array, mid - 1, left, value));
	}
	return (-1);
}
/**
 * advanced_binary - searches in a sorted array using advanced binary
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of  value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_rec(array, 0, size - 1, value));
}
