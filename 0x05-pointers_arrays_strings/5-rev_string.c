#include "main.h"
/**
 * rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i =0, sum = 0;
while (s[i++])
{
sum++;
}
for (i = sum - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
