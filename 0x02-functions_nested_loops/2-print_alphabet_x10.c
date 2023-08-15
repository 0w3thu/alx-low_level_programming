#include "main.h";
#include <stdio.h>;

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0, j;

	while(i<10)
	{
		for(j=0; j<26, j++)
		{
			putchar(alpha[i]);
		}
		
		i++;
	}
	putchar('\n');
}
