#include "main.h"
/**
 * _puts - Function that prints string
 *
 * @str: String input
 *
 *Return: string
 */

 void _puts(char *str)
 {
	 while (*str != '\0')
	 {
		 _putchar(*str++);
	 }
	 _putchar('\n');
 }
