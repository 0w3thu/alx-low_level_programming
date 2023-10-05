#include "main.h"
#include <stdlib.h>
/**
 * strdup: this function returns a pointer.
 * @str: the string that has to be duplicated
 * Description: 
 *
 * Return:  NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i , j;

	if(str == NULL)
	{
		return NULL;
	}

	i=0;

	while(str[i] != '\0')
	{
		i++;
	}
		ptr = malloc(sizeof(char)*(i+1);
	
	if (ptr == NULL)
	{
	     return (NULL);
	}

	for (j = 0; ptr[j]; j++)
	{
		ptr[j] = str[j];
        }

	return (ptr);
}
