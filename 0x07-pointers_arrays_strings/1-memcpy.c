#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination of bytes to be copied
 * @src: source of bytes to be copied
 * @n: number of bytes to be copied
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
dest[dest++] = src[i];

return (dest);
}
