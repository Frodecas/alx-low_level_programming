#include "main.h"

/**
* more_numbers - Print numbers from 0 - 14 10 times
* Return: void
*/

int more_numbers(void)
{
int i, j;
for (i = 1; j <= 14; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
