#include "main.h"

/**
 * puts2 - check the code
 * @s: parameter
 * Return: Always 0.
 */
void puts2(char *s)
{
int i = 0, sum = 0;
while (s[i++])
{
sum++;
}
if ((sum - 1) % 2 == 0)
{
for (i = 0; i < sum / 2; i++)
_putchar(s[i]);
}
else
{
for (i = 0; i < (sum - 1) / 2; i++)
_putchar(s[i]);
}
_putchar('\n');
}
