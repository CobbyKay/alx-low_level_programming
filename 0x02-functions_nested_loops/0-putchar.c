#include "main.h"
/**
* main - print _putchar
* @ i: first int
* @p: char
*
* Return: 0
*/
int main(void)
{
int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		_putchar(p[i]);
		}
_putchar('\n');
return (0);
}
