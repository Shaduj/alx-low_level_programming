#include "main.h"

/**
 * print_chessboard - functions thats prints the chess board
 * @a: 2d array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i <= 7 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
