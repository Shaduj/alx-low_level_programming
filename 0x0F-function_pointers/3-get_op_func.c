#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - perform operation
 * @s: int
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
}
