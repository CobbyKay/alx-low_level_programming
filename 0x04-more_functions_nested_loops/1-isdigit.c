#include "main.h"
/**
  * Task - check for digit (0-9)
  *
  *@c: char to be checked
  *_isdigit: check if function is digit
  *Return: 1 if char is digit, otherwise 0.
  */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
