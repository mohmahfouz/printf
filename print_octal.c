#include "main.h"

/**
* print_octal - pritns octal
* @list: list args
* Return: numb of symbols
*/

int print_octal(va_list list)
{
unsigned int num;
int len;
char *octal_rep;
char *rev_str;

num = va_arg(list, unsigned int);

if (num == 0)
return (_putchar('0'));
if (num < 1)
return (-1);
len = base_len(num, 8);

octal_rep = malloc(sizeof(char) * len + 1);
if (octal_rep == NULL)
return (-1);
for (len = 0; num > 0; len++)
{
octal_rep[len] = (num % 8) + 48;
num = num / 8;

}
octal_rep[len] = '\0';
rev_str = rev_string(octal_rep);
if (rev_str == NULL)
return (-1);

write_base(rev_str);
free(octal_rep);
free(rev_str);
return (len);
}
