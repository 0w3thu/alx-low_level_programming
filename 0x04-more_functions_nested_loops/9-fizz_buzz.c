#include "main.h"
#include <stdio.h>

/**
 * main - prints 1-100 with a 3 exceptions
 *
 * entry: Always return 0 (Suceess)
 */

int main(void)
{
	int = 1 
	for(i=1; i<=100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
