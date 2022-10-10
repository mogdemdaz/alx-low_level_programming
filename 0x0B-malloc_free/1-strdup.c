#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of @str
 * @str: parameter to duplicate.
 * Return: pointer to the newly allocated space or NULL
 */

char *_strdup(char *str)
{
char *copy;
int i, count = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
count++;

copy = malloc(sizeof(char) * (count + 1));

if (copy == NULL)
return (NULL);

for (i = 0; str[i]; i++)
copy[i] = str[i];

copy[count] = '\0';
return (copy);

}
