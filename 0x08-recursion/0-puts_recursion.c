#include "main.h"
/**
 * _puts_recursion: the function aims at using recursion to print out a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
