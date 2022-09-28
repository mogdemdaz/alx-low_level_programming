#include "main.h"

/**
 * _strpbrk - locates a character @c in a string @s
 *
 * @s: string to search
 * @accept: character to locate
 *
 * Return: A pointer to the first occurence of @accept in @s
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{

for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
