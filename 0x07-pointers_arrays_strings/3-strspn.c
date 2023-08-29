#include "main.h"

/**
 * _strchr: Function gets the length of a prefix substring
 * @s: input
 * @c: input
 * Return: number of bits
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while(*s)
	{
		for(int i=0; accept[i]; i++)
		{
			if(*s == accept[r])
			{
				n++;
				break;
			}
			else if(accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (0);
}
