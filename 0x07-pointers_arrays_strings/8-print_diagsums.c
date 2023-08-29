#include "main.h"

/**
 * print_diagsmus - print the sum of the two diagonal of square matrix integers
 * @a: input
 * @size: input
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2,y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0 ; y < size; 
