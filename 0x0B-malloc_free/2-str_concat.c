#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char s1len = 0;
	char s2len = 0;
	char *contwo;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	contwo = (char *)malloc(sizeof(char) * s1len + s2len + 1);

	if (contwo == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		contwo[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		contwo[s1len + i] = s2[i];
	return (contwo);
}
