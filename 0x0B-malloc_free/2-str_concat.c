#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat: this function adds two strings together
 * @s1: the first string passed 
 * @s2: the second string that will be added to the string
 * Description: Hhayi mina angazi
 * Return: added string pointer 
 * Return: NuLL if there is failure
 */
char *str_concat(char *s1, char *s2)
{
        /*Gets the legnth of the strings given*/
	int cont1 , cont2 = 0;
	cont1 = sizeof(s1);
	cont2 = sizeof(s2);

	char *ptr;
	ptr = malloc(sizeof(char) * (cont1+cont2+1));
	int i , j;
	int len = 0;
        

	/*This for loop fills the s1 contents into the ptr*/
	for(i = 0; si[i] != '\0'; i++)
	{
		ptr[i] = str1[i];
	}

	/*This for loops will get the end of ptr*/
	for(j = 0; ptr[j] != '\0'; j++)
	{
		len++;
	}

	/*This for loops will concatenate the s2 at the end of ptr*/
	for(i = 0; s2[i] != '\0'; i++)
	{
		ptr[len+1] = s2[i];
        }
        ptr[len+1] = '\0';
	return ptr;
}
