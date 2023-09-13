#include <stdio.h>
#include "dog.h"

/**
 * _strlen - find length of string
 * @s: strng to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		return (i);
}

/**
 * _strcpy - copy string
 * @dest:destination string
 * @src: source string
 * Return: copied string
 */

char *_strcpy(char *dest,char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len: i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

