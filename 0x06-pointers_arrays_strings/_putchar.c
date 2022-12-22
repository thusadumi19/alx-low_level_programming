#include "main.h"
#include <unistd.h>

/**
 *  _putchar - writes the character c to stdout
 *  @c: character to be printed
 *  Return: 1 on success andd -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
