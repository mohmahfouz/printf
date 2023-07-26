#include "main.h"

/**
* print_unsigned_integer - Prints unsigned int
* @list: list args
* Return: count num
*/

int print_unsigned_integer(va_list list)
{
unsigned int num;

num = va_arg(list, unsigned int);

if (num == 0)
return (print_unsgined_number(num));

if (num < 1)
return (-1);
return (print_unsgined_number(num));
}


/**
* print_unsgined_number - prints unsigned num
* @n: unsigned int
* Return: amount 
*/

int print_unsgined_number(unsigned int n)
{
int div;
int len;
unsigned int num;

div = 1;
len = 0;

num = n;

for (; num / div > 9; )
div *= 10;

for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}

return (len);
}
