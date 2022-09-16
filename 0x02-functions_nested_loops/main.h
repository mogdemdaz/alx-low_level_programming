#include <stdio.h>

void ptchar(char c)
{
putchar(c);
}

void print_alphabet(void)
{
char ch;  
for (ch = 'a'; ch <= 'z'; ch++)
{
ptchar(ch);
}
ptchar('\n');
}  
