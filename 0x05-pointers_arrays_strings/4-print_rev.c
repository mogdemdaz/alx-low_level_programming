#include "main.h"

/**
 * print_rev - check the code
 * @so: parameter
 * Return: Always 0.
 */
void print_rev(char *so)
{
int i, sum = 0;
char s[] = *so;
while (s)
{
s++;
sum++;
}
for (i = sum - 1; i >= 0; i--)
_putchar(so[i]);

_putchar('\n');
}
