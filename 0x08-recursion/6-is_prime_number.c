#include "main.h"


/**
 * check - determins a prime number
 * @n: number to check
 * @i: the divider
 *
 * Return:  returns 1 if @n is a prime number or 0 otherwise
 */

int check(n, i)
{
if (n % i == 0)
return (0);

else if (n / 2 == i)
return (1);

return (check(n, i + 1));
}

/**
 * is_prime_number - determins a prime number
 * @n: number to check
 *
 * Return:  returns 1 if @n is a prime number or 0 otherwise
 */

int is_prime_number(int n)
{
int i = 2;
if (n <= 1)
return (0);

if (n >= 2 && n <= 3)
return (1);

return (check(n, i));
}
