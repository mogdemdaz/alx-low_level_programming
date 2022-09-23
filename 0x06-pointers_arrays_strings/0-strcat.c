#include "main.h"

/**
 * _strcat - check the code
 * @dest: params 1
 * @src: params 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j, count = 0, count2 = 0;
while (dest[i++])
count++;

while (src[j++])
count2++;

for (i = 0; i < count2; i++)
{
dest[count++] = src[i];
}
return (dest);
}
