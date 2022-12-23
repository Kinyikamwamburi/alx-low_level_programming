#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 *Return: reversed contents
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
