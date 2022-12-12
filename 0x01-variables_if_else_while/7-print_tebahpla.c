#include<stdio.h>
/**
 * main - Entry point. Print alphabets in reverse(lowercase)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');

		return (0);
}
