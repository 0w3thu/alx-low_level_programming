#include <stdio.h>
/**
 * main - entry
 *
 * return: always 0 = (Sucess)
 */
int main(void) 
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i=0; i<52; i++)
	{
		putchar(alpha[i]);
	}
	
	putchar('\n');
	return(0);
}
