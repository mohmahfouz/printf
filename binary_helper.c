#include "main.h"

/**
* base_len - Calculates
* @num: number
* @base: Base
* Return: integer
*/

unsigned int base_len(unsigned int num, int base)
{
unsigned int i;

for (i = 0; num > 0; i++)
{
num = num / base;
}
return (i);
}


/**
* rev_string - reverses
* @s: string
* Return: pointer
*/

char *rev_string(char *s)
{
int len;
int head;
char tmp;
char *dest;

for (len = 0; s[len] != '\0'; len++)
{}

dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);

_memcpy(dest, s, len);
for (head = 0; head < len; head++, len--)
{
tmp = dest[len - 1];
dest[len - 1] = dest[head];
dest[head] = tmp;
}
return (dest);
}


/**
* write_base - sends
* @str: String
*/

void write_base(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
}


/**
* _memcpy - copy
* @dest: Destination
* @src: Source
* @n: number
* Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}


/**
* hex_check - Checks
* @num: Number
* @x: which hex
* Return: Ascii
*/

int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";

num = num - 10;
if (x == 'x')
return (hex[num]);
else
return (Hex[num]);
return (0);
}
