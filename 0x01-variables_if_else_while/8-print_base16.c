#include <stdio.h>


/**
 * main-Program prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
