#include "main.h"

/**
 * _strlen - check the code
 * @s: parameter
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i, sum = 0;
for (i = 0; s[i] != '\0'; i++)
sum++;
return(sum);
}
