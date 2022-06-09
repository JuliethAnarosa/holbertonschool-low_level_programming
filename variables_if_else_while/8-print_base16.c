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
	int juli;
	char ana;

	for (juli = '0'; juli <= '9'; juli++)
		putchar(juli);
	for (ana = 'a'; ana <= 'f'; ana++)
		putchar(ana);
	putchar('\n');

	return (0);
}
