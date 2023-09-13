#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: structure of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
