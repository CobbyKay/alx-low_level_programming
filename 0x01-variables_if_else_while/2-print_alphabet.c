#include <stdio.h>
/**
 * main - Print the alphabet in lowercase(a) and then in uppercase(A).
(*
 * Return: 0 on success
 */
int main(void)
{
 char c = 'a';
 char d = 'A';

 while (c <= 'z')
 {
  putchar(c);
  c++;
 }
 while (d <= 'Z')
 {
  putchar(d);
  d++;
 }
 putchar('\n');
 return (0);

}
