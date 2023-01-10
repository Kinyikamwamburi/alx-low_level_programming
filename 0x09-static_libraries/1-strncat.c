#include "main.h"
#include <string.h>

/**
 * *_strncat - Function that concatenates 2 strings but using more n bytes
 *
 * @dest: the string to be concatenated to src
 * @src: the secont string to be concatenated to dest
 * @n: bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
