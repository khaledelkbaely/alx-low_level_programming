#include "main.h"

/**
 * _isupper - main entry
 *
 * @c - char to check
 *
 * Return: 1 if upper otherwise 0
 */

int _isupper(int c)
{
	int i;

	i = 0;

	while (i < 26)
	{
		if (c == i + 'A')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
