#include "main.h"

/**
 * _islower - code to check for lower alphabets
 * @c: The character to check
 * Return: Always 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
