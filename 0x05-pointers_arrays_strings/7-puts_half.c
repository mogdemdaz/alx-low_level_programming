#include "main.h"

/**
 * puts_half - check the code
 * @s: parameter
 * Return: Always 0.
 */
void puts_half(char *s)
{
int i = 0, sum = 0;
while (s[i++])
{
sum++;
}
if (sum % 2 == 0)
{
for (i = (sum / 2) + 1; i <= sum; i++)
_putchar(s[i]);
}
else
{
for (i = (sum - 1) / 2; i < sum; i++)
_putchar(s[i]);
}
_putchar('\n');
}
