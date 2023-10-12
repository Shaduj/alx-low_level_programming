#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for int
 * @array: array of int
 * @size: size of int
 * @cmp: function pointer to int
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
	}
	return (0);
}
