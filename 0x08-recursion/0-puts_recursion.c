#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: Print the strings
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);

		_puts_recursion(s + 1);

	} else
	{
		puts("");
	}
}
