#include "main.h"

/**
 * print_last_digit - code to print last digit
 * @n: parameter n
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int ld;
ld = n % 10;
if (ld < 0)
ld *= -1;
_putchar(ld + '0');
return (ld);
}
