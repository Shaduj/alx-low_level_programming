#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: element
 * @size: size of each byte
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *output;
	unsigned int totalsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	totalsize = nmemb * size;
	output = malloc(totalsize);
	if (output == NULL)
		return (NULL);
	memset(output, 0, totalsize);
	return (output);
}
