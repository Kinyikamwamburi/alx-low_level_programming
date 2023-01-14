#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_range -  an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int i, size = (max - min) + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = (int *) malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
