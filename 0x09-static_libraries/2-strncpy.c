#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: buffer to copy string to
 * @src: string to copy
 *
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
