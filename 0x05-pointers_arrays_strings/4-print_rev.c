#include "main.h"

/**
 * print_rev - check the code
 * @s: parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, sum = 0;
while (*s)
{
s++;
sum++;
}
for (i = sum -1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
