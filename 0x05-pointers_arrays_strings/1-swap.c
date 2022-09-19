#include "main.h"
#include <stdio.h>
/**
 * swap_int -swaps the values of two integers.
 *
 * @a: variable  to hold integers to be swapped
 * @b: variable  to hold integers to be swapped
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
