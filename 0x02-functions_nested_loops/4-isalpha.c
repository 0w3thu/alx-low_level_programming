#include "main.h"
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _isalpha(int c);

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

/* This function determines if a char is an alphabet*/
int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
