#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @i: single letter input
 * Return: 1 if int i is lowercase, 0 if otherwise
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
