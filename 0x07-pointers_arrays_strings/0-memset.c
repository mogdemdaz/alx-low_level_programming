#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 * @s: memory pointer
 * @b: constant byte
 * @n: number of bytes to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0, count = 0;

while (s[i++])
count++;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (*s);
}
