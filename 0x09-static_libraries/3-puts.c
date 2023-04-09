#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @s: string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}

	putchar('\n');
}
