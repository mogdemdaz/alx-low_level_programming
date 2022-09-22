#include "main.h"

/**
 * _strcat - check the code
 * @dest: params 1
 * @src: params 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
for (i = 0; i != '\0'; i++)
{
dest++ = src[i];
}
dest++ = '\0';
return (dest);
}
