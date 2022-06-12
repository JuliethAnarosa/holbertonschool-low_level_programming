#include "main.h"
/**
 * void jack_bauer - Write a function that prints every minute of the day
 *@n: number being tested
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute <60; minute++)
			{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			}
	}
}
