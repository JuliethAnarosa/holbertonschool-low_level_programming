#include "main.h"

/**
 * _isalpha - Estas funciones verifican si c , que debe tener el valor de un carácter sin firmar o EOF , cae en una determinada clase de caracteres según la configuración regional actual.
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
