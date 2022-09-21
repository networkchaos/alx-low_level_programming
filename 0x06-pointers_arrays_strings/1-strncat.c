#include "main.h"
#include <string.h>
/**
 * _strncat -  function that concatenates two strings.
 *
 * @dest: character pointer
 * @src: character pointer
 * @n: number of bytes in a string
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
