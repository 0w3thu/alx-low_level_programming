#include <stdio.h>

/**
 * main
 *
 * return
 */
int main(void)
{
        int n =5;

	if(n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i=0;
		while(i<n)
		{
			printf("\\n");
			i++;
		}
	}
	printf("\n");
	return(0);
}
