#include "main.h"

/**
 * _strchr - locates a character @c in a string @s
 *
 * @s: string to search
 * @c: character to locate
 *
 * Return: A pointer to the first occurence of @c in @s or null if not found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (c == s[i])
return (s + i);
}
return ('\0');
}
