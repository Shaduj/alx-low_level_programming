#include "main.h"

/**
 * is_prime - determines prime numbers
 * @n: prime number
 * @i: counts amount of number divided by
 * Return: 1
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - determine prime number
 * @n: prime number
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
