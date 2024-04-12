#include <stdio.h>
#include "search_algos.h"

/**
 * linear_interpolation - searches for a value in a sorted array of integers
 * using the Linear interpolation search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 on failure
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	
	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos -1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
	{
		printf("value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
}
