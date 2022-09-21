#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat -  function that concatenates two strings.
 *
 * @dest: character pointer
 * @src: character pointer
 *
 * Return:0.
 */
char *_strcat(char *dest, char *src)
{
	char  *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
