#include "main.h"

/**
 * _strchr - function that return a string in a character
 * @s: string to search from
 * @c: character to search for
 * Return: NULL or s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
