#include <unistd.h>
#include "main.h"

/**
 * _putchar- Writes the character of c to stdout
 * @c: character to print
 * Return : 1 (success), else -1
 */
int _putchar(char c)
{
	return (write(1, &c, -1));
}
