#include "main.h"
/**
  *void_numbers -  prints 10 times the numbers, from 0 to 14
  *Return: void
  */
void more_numbers(void)
{
	char c;

	for (c = '0'; c <= '14'; 10 * c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
