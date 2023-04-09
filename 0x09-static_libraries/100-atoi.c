#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int res = 0;

	while (*s != '\0') {
		if (*s == '-')
			sign = -1;

		if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');

		if (*s < '0' || *s > '9')
			break;

		s++;
	}

	return (sign * res);
}
