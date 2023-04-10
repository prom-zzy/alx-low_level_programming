#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
