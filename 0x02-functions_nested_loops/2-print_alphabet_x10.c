#include "main.h"

/**
 * print_alphabet - code to print alphabets wow
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int n;
char ch;
for (n = 1; n <= 10; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
