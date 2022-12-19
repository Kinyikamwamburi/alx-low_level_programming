#include "main.h"

/**
 * _strlen - Function that returns length of a string
 * @s: Length of the string
 *
 * Return: Length of string *s
 */
int _strlen(char *s)
{
	int c = 0;

		while (s[c] != '\0')
			c++;
return (c);
}
