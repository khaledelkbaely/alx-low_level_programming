#include "main.h"

/**
 * print_chessboard - entry point
 *
 * @a: 2-dimesional array of chess
 *
 * Return: does not return
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
