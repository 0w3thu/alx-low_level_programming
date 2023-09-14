#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name: This function prints a name
 * @name: the string that will be printed
 * @f: pointer to functions
 * 
 * Return: void(nothing)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
