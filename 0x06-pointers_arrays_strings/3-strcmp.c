#include "main.h"

/**
 * _strcmp - check the code
 * @s1: params 1
 * @s2: params 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
