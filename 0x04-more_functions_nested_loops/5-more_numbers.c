#include "main.h"

/**
 * more_numbers - check the code
 * Return: Always 0.
 */
void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j < 10)
_putchar(i + '0');
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
}
_putchar('\n');
}
}
