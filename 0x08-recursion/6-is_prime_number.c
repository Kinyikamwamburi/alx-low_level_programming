#include "main.h"
/**
 * is_prime - checks prime numbers
 * @check: integer
 * @n: interger to be iterated
 * Return: 1 or 0
 */
int is_prime(int n, int check)
{
	if (n % check == 0)
	{
		return (0);
	}
	if (check == n / 2)
	{
		return (1);
	}
	return (is_prime(n, check + 1));
}
/**
 * is_prime_number - evaluate prime or not
 * @n: number
 * Return: 1 if the input integer is a prime number.
 * otherwise return 0
 */
int is_prime_number(int n)
{
	int check = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_prime(n, check));
}
