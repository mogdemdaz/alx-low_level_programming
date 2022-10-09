#include "main.h"
/**
 * _strstr - find the first occurence of the substring @needle in @haystack
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the start of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);

while (*haystack)
{
i = 0;
while (haystack[i] == needle[i])
{
if (needle[i + 1] == '\0')
return (haystack);
i++;
}
haystack++;
}
return ('\0');
}
