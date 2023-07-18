#include "main.h"

/**
 * _isalpha - Entry point
 * @c : charchter that enters
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

