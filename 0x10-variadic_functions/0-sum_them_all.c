#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: constant number of variable params
 * @...: a variable number of params
 * Return: reurn the sum or 0 if @n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, sum = 0;

va_start(nums, n);

for (i = 0; i < n; i++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
