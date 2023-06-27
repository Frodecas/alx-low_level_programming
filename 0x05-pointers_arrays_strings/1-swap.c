#include "main.h"

/**
 * swap_int - Swapping the value of two integers
 * @a: The first value of integer
 * @b: The second value of integer
 * Return: void
 */

void swap_int(int *a, int *b)
{

	int n;

	n = *a;
	*a = *b;
	*b = n;

}

