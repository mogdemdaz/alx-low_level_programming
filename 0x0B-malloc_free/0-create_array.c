#include "main.h"

/**
 * create_array - creates array of chars and initializes it with a char
 *
 * @size: size of array to create
 * @c: character to initialize the array with
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(sizeof(char) * size);

for (i = 0; i < size; i++)
array[i] = c;

if (array == NULL)
return (NULL);

return (array);
}
