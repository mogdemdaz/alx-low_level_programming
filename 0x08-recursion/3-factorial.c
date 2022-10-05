#include "main.h"

/**
 * factorial - returns factorial of a given number @n
 * @n: given number
 *
 * Return: returns -1 if @n is less than 0 or the factorial of @n
 */

int factorial(int n)
{
int sum = 0;
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
sum *= factorial(n -1);

return (sum);
}
