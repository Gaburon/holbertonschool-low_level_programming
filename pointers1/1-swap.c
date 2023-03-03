#include "main.h"

/**
 * swap_int - cambia integers
 *
 * @a: primer integer
 * @b: segundo integer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
