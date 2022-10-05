#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to work on
 *
 * Return: the lenght of the string @s
 */

int _strlen_recursion(char *s)
{
int sum = 0;
if (*s)
{
sum++;
sum += _strlen_recursion(s + 1);
}
return (sum);
}
