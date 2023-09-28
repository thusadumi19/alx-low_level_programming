#include "main.h"
/**
 * factorial - factorial of int
 * @s:int
 * Return:int
 */
int factorial(int s)
{
	int x;

	if (s == 0)
	{
		return (1);
	}
	else if (s < 0)
	{
		return (-1);
	}
	else
	{
		x = s * factorial(s - 1);
	}
			return (x);

}
