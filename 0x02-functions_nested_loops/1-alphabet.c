#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int print_alphabet(void)
{
char ch;  
for (ch = 'a'; ch <= 'z'; ch++)
{
ptchar(ch);
}
ptchar('\n');
return (0); 
}
