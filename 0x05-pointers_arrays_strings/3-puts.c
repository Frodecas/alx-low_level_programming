#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: value of string
 * Return: 0
 */

void _puts(char *str)
{

	while (*str != '\0')

	{
	_putchar(*str++);
}
_putchar('\n');
}
