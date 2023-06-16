#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0(success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int o;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)Sizeof(c));
printf("Size of a int: %lu byte(s)\n", (unsigned long)Sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)Sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)Sizeof(o));
printf("Size of a float: %lu byte(s)\n", (unsigned long)Sizeof(f));
return (0);
}
