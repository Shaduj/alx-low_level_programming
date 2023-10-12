#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * @array: array of function
 * @size: size of funcion
 * @action: function pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(action)(array[i]);
	}
}
