#include "main.h"

/**
 * Function prints a string followed by a new line to standard output
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}