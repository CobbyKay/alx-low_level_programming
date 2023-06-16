#include <stdio.h>
/**
 * main - Prints from a to z except q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
 char c = 'a';

 while (c <= 'z')
 {
  if (c != 'q' && c != 'e')
  {
   putchar(c);
  }
  c++;
 }
 putchar('\n');
 return (0);
}
