#include "main.h"
/**
 * _strcmp -  function that compares two strings.
 * @s1: This is the first string to be compared.
 * @s2: This is the second string to be compared.
 * Return:0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
