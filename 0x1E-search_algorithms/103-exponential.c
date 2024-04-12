#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - perform binary search on sorted integer array
 * @array: pointer to the first element of the array to search in
 * @low: left index in the array
 * @high: right index in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is absent
 * from array or if array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* calculate the middle index */
		mid = low + (high - low) / 2;

		/* Adjust the search boundaries */
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	/* value not found */
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if not found
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0, subarray_size;

	if (!array)
		return (-1);

	/* Find the range where the value could be */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = bound < size ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

	subarray_size = min < size - bound / 2 ? min - bound / 2 + 1 : size - bound / 2;
	/* call binary search */
	return (binary_search(array + bound / 2, subarray_size, value));
}
