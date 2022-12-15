#include "main.h"

/**
 * _isuper - checks if parameter is an uppercase character
 * @c: input character
 * Return: 1 if uppercase, otherwise 0
 */

int _isuper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
