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
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];


return (dest);
}
