#include "main.h"
#include <stdio.h>
/**
 * main - function that prints number of arguments passed on
 * @argc: number of commandline arguments
 * @argv: array name
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int i;


	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
