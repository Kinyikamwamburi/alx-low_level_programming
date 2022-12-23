#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *@i: pointer
 *
 * Return: Always success
 */

char *string_toupper(char *i)
{
	int x;

	x = 0;

	while (i[x] != '\0')
	{
		if (i[x] >= 'a' && i[x] <= 'z')
			i[x] = i[x] - 32;
		i++;
	}

	return (i);
}
