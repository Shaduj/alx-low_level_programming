#include "main.h"
/**
 * _isalpha - check fot alphabetic character
 * @c: The character in ASCII code
 * Return: 1 for letters.0 for the remaining.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
