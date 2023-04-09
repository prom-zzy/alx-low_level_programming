#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte,
 * to the buffer pointed to by dest
 * @dest: the buffer to copy the string to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (temp);
}
