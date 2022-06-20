#include "main.h"
#include <stdio.h>

/**
*_print_chessboard - prints the chessboard.
* @a: matrix
**/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
	_putchar('\n');
	}
}
