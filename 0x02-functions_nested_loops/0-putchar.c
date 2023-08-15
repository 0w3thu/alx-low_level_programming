#include <stdio.h>

/**
 * main-entry
 *
 * return: always 0 (Success)
 */
int main(void)
{
	char putArray[8]= "_putchar";
	int i;

	for(i=0; i<8; i++)
	{
		putchar(putArray[i]);
	}

	putchar('\n');
	return (0);
}

