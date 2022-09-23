#include "main.h"

/**
 * string_toupper - check the code
 * @n: params 1
 * Return: Always 0.
 */
char *string_toupper(char *n)
{
int i = 0;
while (n[i++])
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] -= 32;
}
return (n);
}
