#include "main.h"

/**
 * _memset - flls memory with constant bytes
 * @s: area to fill bytes
 * @b:constant byte
 * @n:number of bytes
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
