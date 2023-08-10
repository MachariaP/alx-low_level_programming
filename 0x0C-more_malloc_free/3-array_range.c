#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first parameter
 * @max: second parameter
 *
 * Description: function that creates an array of integers
 * Return: Always(0) Success
 */
int *array_range(int min, int max)
{
	int *array;
	int x, array_size;

	if (min > max)
		return (NULL);

	array_size = (max - min) + 1;

	array = malloc(sizeof(int) * array_size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < array_size; x++)
	{
		array[x] = min;
		min = min + 1;
	}

	return (array);
}
