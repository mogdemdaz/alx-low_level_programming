#include "main.h"

/**
 * str_concat - concatenates two strings @s1 and @s2
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space with contents or NULL
 */
char *str_concat(char *s1, char *s2)
{
int i, count = 0;
char *combined;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s2[i++])
count++;

for (i = 0; i < count; i++)
s1[s1 + i] = s2[i];

s1[i] = '\0';

count = 0;

for (i = 0; s1[i]; i++)
count++;

combined = malloc(sizeof(char) * count);
if (combined == NULL)
return (NULL);

for (i = 0; s1[i] i++)
combined[i] = s1[i];


return (combined);

}
