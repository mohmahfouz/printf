#include "main.h"

/**
 * _putchar - prints
 * @character: character
 * Return: 1
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
