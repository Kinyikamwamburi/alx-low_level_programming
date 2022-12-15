#include"main.h"
/**
 * _islower - function that checks lowercase letters
 *
 * Return: return 1 if int c is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
