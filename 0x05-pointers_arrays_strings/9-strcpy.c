#include "main.h"
/**
 * _strcpy - check the code
 * @dest: parameter 1
 * @src: parameter 2
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
dest = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
