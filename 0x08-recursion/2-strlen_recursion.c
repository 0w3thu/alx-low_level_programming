#include "main.h"

/**
 * _strlen_recursion: prints the length of a string
 *
 * @s: The unknow given string
 * Return: success(0)
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
