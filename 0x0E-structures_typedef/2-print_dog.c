#include <stdio.h>
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to d
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name:%s\n", ((*d).name));
		if ((*d).age == NULL)
			printf("nil");
		else
			printf("Age:%f\n", ((*d).age));
		if ((*d).owner == NULL)
			printf("nil");
		else
			printf("Owner:%s\n", ((*d).owner));
	}
}
