#include "main.h"

/**
 * print_rev - Function that print reverse string
 * @s: value for string character
 * Return: 0
 */

void print_rev(char *s)
{

	int longi = 0;
	int o;
		while (*s != '\0')
{
	longi++;
	s++;
}
for (o = longi; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
