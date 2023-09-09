#include "main.h"

/**
 * _strdup - copies a string
 * @str: pointer to new string
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int strlen = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		strlen++;

	copy = (char *)malloc(sizeof(char) * strlen + 1);

	if (copy == NULL)
		return (NULL);
	{
		for (i = 0; str[i] != '\0'; i++)
			copy[i] = str[i];
	}
	return (copy);
}
