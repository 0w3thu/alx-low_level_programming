#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

/* This function will print the alphabets in lowercase */
void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i=0; i<26; i++)
	{
		putchar(alpha[i]);
	}
	
	putchar('\n');
}
