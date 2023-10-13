#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints
 * @separator: coma
 * @n: number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num = 0;

	va_list(args);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		if (num == NULL)
			printf("(nil)");
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
