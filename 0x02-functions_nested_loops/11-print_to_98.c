#include "main.h"

/**
 * print_to_98 - code to print absolute numbers
 * @no: The second number
 * Return: Always 0.
 */
void print_to_98(int no)
{
int num;
int n = no;
if (n < 98)
{
for (num = n; num <= 98; num++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}

else if (n == 98)
_putchar((n + '0'));

else if (n < 98)
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
