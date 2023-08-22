#include "main.h"

/**
 * print_array - print the element of an array of integer
 * @a: array used
 * @n: number of element printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
