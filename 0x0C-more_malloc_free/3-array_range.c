#include "main.h"

/**
 * array_range - create an array of integer
 * @min: minumum value
 * @max: maximum value
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i;
	int *result;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		result[i] = min++;
	return (result);
}
