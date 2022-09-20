#include "main.h"

/**
 * puts_half - check the code
 * @s: parameter
 * Return: Always 0.
 */
void puts_half(char *s)
{
int i = 0, sum = 0, n;
while (s[i++])
{
sum++;
}
if (sum % 2 == 0)
{
n = sum / 2;
}
else
{
n = (sum + 1) / 2;
}
for (i = n; i < sum; i++)
_putchar(s[i]);

_putchar('\n');
}
