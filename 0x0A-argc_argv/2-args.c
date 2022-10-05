#include <stdio.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument value
 *
 * Return: value to be returned
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
