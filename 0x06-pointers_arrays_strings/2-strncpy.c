#include "main.h"

/**
 * _strncpy - check the code
 * @dest: params 1
 * @src: params 2
 * @n: params 3
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, count = 0;
while (src[i++])
count++;

for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];

for(i = count; i < n; i++)
dest[i] = '\0';


return (dest);
}
