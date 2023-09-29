#include "main.h"

/**
 * _pow_recursion - returns the power of a value
 * @x: number to find the power
 * @y: power
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
