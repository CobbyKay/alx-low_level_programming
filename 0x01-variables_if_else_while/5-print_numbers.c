#include <stdio.h>
/**
 * main - print from  numbers 0-9 using putchar
(*
 * Return: 0 on success
 */
int main(void)
{
 int i = '0';

 while (i <= '9')
 {
  putchar(i);
  i++;
 }
 putchar('\n');
 return (0);
}
