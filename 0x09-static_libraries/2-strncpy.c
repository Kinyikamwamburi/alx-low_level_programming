#include "main.h"
#include <string.h>
/**
 * *_strncpy - function that copies a string
 *
 * @dest: pointer to destination array where the content is to be copied
 * @src: string to be copied
 * @n: numbers of characters to be copied from source
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
