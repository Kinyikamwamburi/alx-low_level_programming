#include<stdio.h>
/**
 * main - Entry point
 *        Print 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	putchar('\n');

	return (0);

}
