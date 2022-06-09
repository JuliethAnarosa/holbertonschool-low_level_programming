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
	char juli;

	for (juli = 'a'; juli <= 'z'; juli++)
		putchar(juli);
	for (juli = 'A'; juli <= 'Z'; juli++)
		putchar(juli);
	putchar('\n');

	return (0);
}
