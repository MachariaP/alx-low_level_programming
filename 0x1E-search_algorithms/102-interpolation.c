#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 *         in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* Initialize low and high for binary search */
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		/* Probe the position with keeping uniform distribution in mind */
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		/* Print the value being probed */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* If the value is less than the probed position, adjust the high bound */
		if (array[pos] < value)
			low = pos + 1;

		/* If the value is greater than the probed position, adjust the low bound */
		else if (array[pos] > value)
			high = pos - 1;

		/* If the value is found, return the index */
		else
			return (pos);
	}

	/* If the value is equal to the low bound, return the low bound */
	if (value == array[low])
		return (low);

	/* Calculate the pos again for the out of range message */
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	/* If the value is not found, return -1 */
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
