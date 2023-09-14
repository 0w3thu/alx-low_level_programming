#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator: The function executes a function on all elements of an array
 * @array: The array with elements that will be modified
 * @size: the size of the array given
 * @action: pointer to print in regular or hex
 *
 * Return: void(nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if(array == NULL || action == NULL)
	{
		return
	}

	for(i = 0; i<size, i++)
	{
		action(array[i]);
	}
}
