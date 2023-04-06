/* Header files */
#include <unistd.h>

/* Adding betty style */
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/* Creating a function declarations as required by betty DOC. */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
