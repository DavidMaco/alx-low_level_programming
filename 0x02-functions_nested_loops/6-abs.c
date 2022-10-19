#include "main.h"

/**
 * _abs- Program that computes the absolute value of an integer.
 *
 * @i: input number.
 *
 * Return: Absolute value.
 */
int _abs(int i)

{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
