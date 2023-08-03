#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: integer to convert and print
*/
void print_binary(unsigned long int n)
{
int i, flag;

if (n == 0)
{
_putchar('0');
return;
}

flag = 0;
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
if ((n >> i) & 1)
flag = 1;

if (flag == 1)
((n >> i) & 1) ? _putchar('1') : _putchar('0');
}
}

