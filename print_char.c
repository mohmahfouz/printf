#include "main.h"

/**
 * print_char - prints char
 * @list: list arg
 * Return: amount
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
