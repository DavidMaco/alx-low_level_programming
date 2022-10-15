#include <stdio.h>


/**
 *main- Program prints single digit numbers.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
