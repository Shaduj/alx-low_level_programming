#include "main.h"

/**
 * find_sqrt - find natural square root
 * @m: natural square root
 * @n: number to find the square root
 * Return: natural sqaure root
 */
int find_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (find_sqrt(n, m + 1));
}

/**
 * _sqrt_recursion - square recursion
 * @n: number to find the square
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
