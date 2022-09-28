#include "main.h"
/**
 * factorial - return the factorial of a given number
 * @n: intger to check the factorial of
 * Return: factorial of n or -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
