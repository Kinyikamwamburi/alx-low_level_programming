#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: this is pointer to the source of data to be copied
 * @n: the number of bytes to be copied
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, strlen(src) + n);

	return (dest);
}
