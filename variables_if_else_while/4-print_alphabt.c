#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char juli, e, q;

	e = 'e';
	q = 'q';

	for (juli = 'a'; juli <= 'z'; juli++)
	{
		if (juli != e && juli != q)
			putchar(juli);
	}
	putchar('\n');

	return (0);
}
