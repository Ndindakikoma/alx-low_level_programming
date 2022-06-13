#include "holberton.h"

/**
* reset_to_98 - main
* @n: - pinter to int
*/

void reset_to_98(int *n)
{
	int *num;

	int x = 98;

	num = &x;
	*n = *num;
}
