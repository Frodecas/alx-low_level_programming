#include "main.h"

/**
 * puts2 - Function that print every char follow by new line
 * @str: string length
 * Return: void
 */

void puts2(char *str)
{
int i;
	int longi = 0;
char *y = str;
while (*y != '\0')
{
y++;
longi++;
}
for (i = 0; i < longi; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}
}
