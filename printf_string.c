#include "main.h"

/**
* printf_string - prints string
* @args: args
* @printed: printed chars
* Return: printed chars
*/

int printf_string(va_list args, int printed)
{
char *string = va_arg(args, char *);

while (*string != '\0')
{
_putchar(*string);
printed++;
string++;
}
return (printed);
}
