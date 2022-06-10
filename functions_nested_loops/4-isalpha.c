#include "main.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@i: letter being tested
 * Return: Always 0
 */

int _isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}
