#include "main.h"

/**
 * _puts - check the code
 * @str: parameter
 * Return: Always 0.
 */
void _puts(char *str)
{
while(*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
