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
if (num < 9)
_putchar(num + '0');

else
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
if ((num / 10)  == 9 && (num % 10) == 8)
continue;
_putchar(',');
_putchar(' ');
}
}

else if (n == 98)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}

else if (n > 98)
{
for (num = n; num >= 98; num--)
{
if (num >= 100)
{
_putchar((num / 100) + '0');
_putchar(((num / 10) % 10) + '0');
_putchar((num % 10) + '0');
}
else
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
if ((num / 10)  == 9 && (num % 10) == 8)
continue;
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
