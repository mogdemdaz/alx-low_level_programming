#include "main.h"

/**
 * _sqrt - get the sqrt root of n
 * @n: number to find the squre root of
 * @r:  current root value
 * Return: the sqrt root
 */
int _sqrt(int n, int r)
{
if ((r * r) == n)
return (r);
else if (r == n / 2)
return (-1);

return (_sqrt(n, r + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to square
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
int r = 0;
if (n < 0)
return (-1);
else if (n == 1)
return (1);

return (_sqrt(n, r + 1));
}
