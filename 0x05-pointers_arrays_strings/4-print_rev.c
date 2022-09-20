#include "main.h"

/**
 * print_rev - check the code
 * @so: parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0, sum = 0;
while (s[i++])
{
sum++;
}
for (i = sum - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
