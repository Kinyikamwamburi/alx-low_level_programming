#include<stdio.h>
#include"main.h"
/**
 * main - check the code 
 *
 * print_alphabe,t using  prototype function
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
