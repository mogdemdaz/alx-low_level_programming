#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
{
void *array = malloc(b);
if (array == NULL)
exit(98);

return (array);
}
