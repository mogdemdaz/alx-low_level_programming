#include "main.h"

 /**
 * jack_bauer - check the code
 * 
 * Return: Always 0.
 */
int jack_bauer()
{
int hour, minutes;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n'); 
}
}
return (0);
}
