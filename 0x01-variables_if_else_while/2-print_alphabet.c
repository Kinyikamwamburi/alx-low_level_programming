#include <stdio.h>
/**
 * main - This is where we start
 *    print out lower alphabets
 *
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z'; alph++)
		putchar(alph);
	putchar('\n');

	return (0);

}

