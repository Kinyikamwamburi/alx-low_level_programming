#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array name
 *
 * Return: Always 0, success
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);
}
