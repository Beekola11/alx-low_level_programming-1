#include "variadic_functions.h"

/**
 * sum_them_all(const unsigned int n, ...)
 *
 * @n: number of arguments
 * n == 0
 * Return: integer result or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i = n;
    int sum = 0;

    if (n == 0)
        return (0);
    va_start(args, n);
    for (; i; i--)
        sum += va_arg(args, int);
    va_end(args);
    return (sum);
}