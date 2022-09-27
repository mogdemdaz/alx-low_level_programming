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
int i = 0, count = 0;
char *p = NULL;

while (s[i++])
count++;

for (i = 0; i < count; i++)
{
if (c == s[i])
{
p = &s[i];
break;
}
}
return (p);
}
