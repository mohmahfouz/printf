#include "main.h"

/**
* print_integer - prints int
* @list: list args
* Return: mount of char
*/

int print_integer(va_list list)
{
int num_length;

num_length = print_number(list);
return (num_length);
}


/**
* print_number - print numb
* @args:list args
* Return: numb of args
*/

int print_number(va_list args)
{
int n;
int div;
int len;
unsigned int num;

n  = va_arg(args, int);
div = 1;
len = 0;

if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
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
