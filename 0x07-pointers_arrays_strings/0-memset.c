#include "main.h"

/**
 * _memset - function fills memeory space with a particular character
 * @s: this addresss witll be where the filling starts
 * @b: the desired value
 * @n: the number of spaces that will be filled
 *
 * Returns: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for(i=0; n>0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
