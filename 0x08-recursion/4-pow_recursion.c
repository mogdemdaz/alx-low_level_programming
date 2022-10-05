#include "main.h"

/**
 * _pow_recursion - returns the value ofx raised to the power of y
 * @x: denominator
 * @y: power factor
 *
 * Return: returns the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
int sum = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);

sum *= _pow_recursion(x, y - 1);
return (sum);
}
