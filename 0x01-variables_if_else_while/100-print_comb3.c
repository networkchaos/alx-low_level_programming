#include <stdio.h>

/**
 * main - print 00 to 89
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i <= 89; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
