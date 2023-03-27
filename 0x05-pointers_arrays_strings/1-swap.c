#include "main.h"

/**
 * swap_int - Swaps the values ot two integers
 * @a: integar to swap
 * @b: integar tp swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
