#include "main.h"

/**
 * _isdigit - checks if a number is in the range 0-9
 * @c: char to be checked
 * Return: 1 if in range, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
