#include "main.h"
/**
 * leet - check the code for
 * @n: params 1
 * Return: Always 0.
 */

char *leet(char *n)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (n[indx1] == leet[indx2] ||
n[indx1] - 32 == leet[indx2])
n[indx1] = indx2 + '0';
}
indx1++;
}

return (n);
}
