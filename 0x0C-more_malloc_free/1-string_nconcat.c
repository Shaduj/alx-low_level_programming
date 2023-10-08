#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	if (n >= s2len)
		n = s2len;
	result = malloc(sizeof(char) * s1len + n + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[s1len + i] = s2[i];
	result[s1len + n] = '\0';
	return (result);
}
