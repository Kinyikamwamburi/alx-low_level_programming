#include <stdio.h>
/**
 * main - Entry point This is where we start
 *    print out lower alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);

}

