#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */


int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, j = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	while (array[j] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		i = j;
		j += jump;
		if (j >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	j = j >= size ? size - 1 : j;
	while (i <= j)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

