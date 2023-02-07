#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer that points to a string 0 and 1 char
 *
 * Return: the converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	unsigned int pow = 1;
	int i = 0;

	if (b)
	{
		while (b[i])
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			i++;
		}

		i = i - 1;
		while (i >= 0)
		{
			if (b[i] == '1')
				total += pow;
			i--;
			pow += pow;
		}
	}
	return (total);
}
