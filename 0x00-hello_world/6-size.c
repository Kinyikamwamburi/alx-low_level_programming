#include<stdio.h>
/**
 * main - Entry point. Size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of a double: %li byte(s)\n", sizeof(double));
	printf("Size of a long double: %li byte(s)\n", sizeof(long double));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a float: %li byte(s)\n", sizeof(float));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	return (0);
}
