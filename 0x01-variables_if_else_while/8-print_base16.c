#include<stdio.h>
/**
 * main - Entry point
 *        Prints all numbers of base 16
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
