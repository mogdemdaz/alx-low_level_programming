#include "main.h"

/**
 * reverse_array - check the code
 * @a: params 1
 * @n: params 2
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = n - 1; i >= n / 2 ; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
}
