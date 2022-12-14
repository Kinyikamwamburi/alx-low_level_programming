#include<unistd.h>
/**
 * _putchar - Entry point  writes ch to stdout
 *
 * Return: 1 Success
 */

int _putchar(char ch)

{
	return(write(1, &ch, 1));

}
