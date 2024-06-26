#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: prints every time of the day.
 */
void jack_bauer(void)
{
int hours, minutes;

for (hours = 0 ; hours < 24 ; hours++)
{
for (minutes = 0 ; minutes < 60 ; minutes++)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (minutes / 10));
_putchar('0' + (minutes % 10));
_putchar('\n');
}
}
return;
}
