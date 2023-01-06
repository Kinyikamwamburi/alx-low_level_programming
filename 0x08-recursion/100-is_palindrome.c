#include "main.h"
/**
 * checkPalindrome - function that returns 1 if a string is a
 *  palindrome and 0 if not.
 * @s: pointer to string
 * Return: 1 0r 0
 */

int checkPalindrome(char *s)
{
	if (!*s)
		return (0);

	return (1 + checkPalindrome(++s));
}

/**
 * isPalRec - palindrome
 * @s: pointer string
 * @i: position
 * Return: result
 */
int isPalRec(char *s, int i)
{
	if (i < 1)
		return (1);
	if (*s == *(s + i))
		return (isPalRec(s + 1, i - 2));

	return (0);

}

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: the string to be output
 *
 * Return: string
 */
int is_palindrome(char *s)
{
	int len = checkPalindrome(s);

	return (isPalRec(s, len - 1));
}
