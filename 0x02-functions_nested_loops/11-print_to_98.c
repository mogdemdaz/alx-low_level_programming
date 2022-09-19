#include "main.h"

/**
 * print_to_98 - code to print absolute numbers
 * @n: The second number
 * Return: Always 0.
 */
void print_to_98(int n)
{
int num;  
if (n < 98)
{
for (num = n; num <= 98; num++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
for (num = n; num >= 98; num--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}  
}
_putchar('\n');
}
