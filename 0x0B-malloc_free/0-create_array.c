#include"main.h"
#include <stdlib.h>
/**
 * create array: this function creates an array with an unspecific number of space
 *
 * @size: the size of the unsigned int
 * @c: the array of the char
 * description : create array of size size and assign char c
 *Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
