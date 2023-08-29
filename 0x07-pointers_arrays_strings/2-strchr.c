#include "main.h"

/**
 * _strchar: Function finds a particular character in  a string
 * @s: The string that will be searched
 * @c: the pointer of c is returned
 *
 * returns: c or NULL
 */
char *_strchr(char *s, char c)
{
	for(int i = 0; s[i] >= '\0'; i++)
	{
		if(s[i]==c)
		{
			return(&s[i]);
		}
	}
		
		return(0);
}
