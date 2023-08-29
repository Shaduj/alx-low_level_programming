#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: no of times '\' should be printed
 */

void print_diagonal(int n);
{
	if (n <= 0)
		_putchar('\n');
	else 
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_puchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
