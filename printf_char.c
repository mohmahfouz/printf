#include "main.h"

/**
* printf_char - prints binary
* @args: arguments
* @printed: characters
* Return: charcaters
*/

int printf_char(va_list args, int printed)
{
int character = va_arg(args, int);

_putchar(character);
return (printed + 1);
}
