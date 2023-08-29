#include "main.h"

/**
 * print_chessboard: prints a chess board
 * @a: is the array that will be printed 
 * Return: (0)
 */
void print_chessboard(char (*a)[8])
{
	for(int i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
