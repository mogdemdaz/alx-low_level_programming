#include "main.h"

/**
 * _strcat - check the code
 * @dest: params 1
 * @src: params 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, count = 0;
for (i = 0; dest[i] != '\0'; i++)
count++;


for (i = 0; src[i]; i++)
{
dest[count++] = src[i];
}
return (dest);
}
