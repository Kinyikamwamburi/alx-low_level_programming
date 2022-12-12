#include<stdio.h>
/**
 * main - Entry point prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, i = 0;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = n1 + 1; n2 <= '9'; n2++, i++)
		{
			if (i > 0) {
				putchar(',');
				putchar(' ');
			}
			putchar(n1);
			putchar(n2);
		}
	}
	putchar('\n');
	return (0);

}
